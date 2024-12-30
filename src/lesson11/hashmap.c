//---------------------------------------------------------
// file: hashmap.c
// project: Learning C
// author: Ed Goodwin
// date: 10.12.2024
// description:
//  HashMap implementation
/*  === OUTPUT ===
    Testing HashMap
    Object HashMap count=4 buckets=8
    y=2 [1]
    a=4 [1]
    z=1 [2]
    b=3 [2]
    size=4
    z=1
    x=42

    Iterate
    y=2
    a=4
    z=1
    b=3
*/
 //---------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct HashMapEntry {
    char *key;  /* public */
    int value;  /* public */
    struct HashMapEntry *__prev;
    struct HashMapEntry *__next;
};

struct HashMapIter {
    int __bucket;
    struct HashMap *__map;
    struct HashMapEntry *__current;

    struct HashMapEntry* (*next)(struct HashMapIter* self);
    void (*del)(struct HashMapIter* self);
};

struct HashMap {
    /* Attributes */
    int __buckets;
    struct HashMapEntry *__heads[8];
    struct HashMapEntry *__tails[8];
    int __count;

    /* Methods */
    void (*put)(struct HashMap* self, char *key, int value);
    int (*get)(struct HashMap* self, char *key, int def);
    int (*size)(struct HashMap* self);
    void (*dump)(struct HashMap* self);
    struct HashMapIter* (*iter)(struct HashMap* self);
    void (*del)(struct HashMap* self);
};

void __HashMap_del(struct HashMap* self)
{
    int i;
    struct HashMapEntry *cur, *next;

    for(i=0; i<self->__buckets; i++) {
        cur = self->__heads[i];
        while(cur) {
            free(cur->key);
            /* value is just part of the struct */
            next = cur->__next;
            free(cur);
            cur = next;
        }
    }
    free((void *)self);
}

void __HashMapIter_del(struct HashMapIter* self) {
    free((void *)self);
}

int getBucket(char *str, int buckets)
{
    int hash = 42;
    if ( str == NULL ) return 0;
    for( ; *str ; str++) {
        hash = ( hash << 3 ) ^ *str;
    }
    return hash % buckets;
}

void __HashMap_dump(struct HashMap* self)
{
    int i;
    struct HashMapEntry *cur;
    printf("Object HashMap count=%d buckets=%d\n", self->__count, self->__buckets);
    for(i = 0; i < self->__buckets; i++ ) {
        for(cur = self->__heads[i]; cur != NULL ; cur = cur->__next ) {
            printf(" %s=%d [%d]\n", cur->key, cur->value, i);
        }
    }
}

struct HashMapEntry* __HashMapIter_next(struct HashMapIter* self)
{
    /* TODO: Add some code here */
    return NULL;
}

struct HashMapIter* __HashMap_iter(struct HashMap* map)
{
    struct HashMapIter *iter = malloc(sizeof(*iter));
    iter->__map = map;
    iter->__bucket = 0;
    iter->__current = map->__heads[iter->__bucket];
    iter->next = &__HashMapIter_next;
    iter->del = &__HashMapIter_del;
    return iter;
}

/* student code here */
struct HashMapEntry* __HashMap_find(struct HashMap* self, char *key, int bucket)
{
  //HashMapIter* hmi = __HashMap_iter(self);
  return 42;
}

/* student code here */
void __HashMap_put(struct HashMap* self, char *key, int value) {
    int bucket;
    struct HashMapEntry *old, *new;
    char *new_key;

    if ( key == NULL ) return;

    bucket = getBucket(key, self->__buckets);
    old = __HashMap_find(self, key, bucket);

    if ( old != NULL ) {
        old->value = value;
        return;
    }
    new = malloc(sizeof(*new));
    /* TODO: Add some code here */
    self->__count++;
}

/* student code here */
/* if key exists, return the value, otherwise set value to def */
int __HashMap_get(struct HashMap* self, char *key, int def)
{
  struct HashMapEntry *entry;
  int value, bucket = 0;
  if (key == NULL) return;

  bucket = getBucket(key, self->__buckets);
  entry = __HashMap_find(self, key, bucket);

  if (entry->value == NULL) {
    entry->value = def;
  }
  
  return entry->value;
}

/* student code here */
int __HashMap_size(struct HashMap* self)
{
    return (int)self->__count;
}

/* student code here */
struct HashMap * HashMap_new() {
    struct HashMap *p = malloc(sizeof(*p));
    int i;

    p->__buckets = 8;
    for(i=0; i < p->__buckets; i++ ) {
        p->__heads[i] = NULL;
        p->__tails[i] = NULL;
    }

    p->__count = 0;

    p->put = &__HashMap_put;
    p->get = &__HashMap_get;
    p->size = &__HashMap_size;
    p->dump = &__HashMap_dump;
    p->iter = &__HashMap_iter;
    p->del = &__HashMap_del;
    return p;
}

int main(void)
{
    struct HashMap * map = HashMap_new();
    struct HashMapEntry *cur;
    struct HashMapIter *iter;

    setvbuf(stdout, NULL, _IONBF, 0);  /* Internal */

    printf("Testing HashMap\n");
    map->put(map, "z", 8);
    map->put(map, "z", 1);
    map->put(map, "y", 2);
    map->put(map, "b", 3);
    map->put(map, "a", 4);
    map->dump(map);

    printf("size=%d\n", map->size(map));

    printf("z=%d\n", map->get(map, "z", 42));
    printf("x=%d\n", map->get(map, "x", 42));

    printf("\nIterate\n");
    iter = map->iter(map);
    while(1) {
        cur = iter->next(iter);
        if ( cur == NULL ) break;
        printf(" %s=%d\n", cur->key, cur->value);
    }
    iter->del(iter);

    map->del(map);
}
