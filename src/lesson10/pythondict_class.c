//---------------------------------------------------------
// file: pythondict_class.c
// project: Learning C
// author: Ed Goodwin
// date: 08.31.2024
// description:
//   redo of pythondict_class.c to enforce encapsulation
//---------------------------------------------------------

// EXPECTED OUTPUT
// Map test
// Object Map count=4
//   z=1
//   y=2
//   b=3
//   a=4
// size=4
// z=1
// x=42

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct MapEntry {
    char *key;  /* public */
    int value;  /* public */
    struct MapEntry *__prev;
    struct MapEntry *__next;
};

struct Map {
   /* Attributes */
   struct MapEntry *__head;
   struct MapEntry *__tail;
   int __count;

   /* Methods */
   void (*put)(struct Map* self, char *key, int value);
   int (*get)(struct Map* self, char *key, int def);
   int (*size)(struct Map* self);
   void (*dump)(struct Map* self);
   void (*del)(struct Map* self);
};

void __Map_del(struct Map* self) {
    struct MapEntry *cur, *next;
    cur = self->__head;
    while(cur) {
        free(cur->key);
        /* value is just part of the struct */
        next = cur->__next;
        free(cur);
        cur = next;
    }
    free((void *)self);
}

void __Map_dump(struct Map* self)
{
    struct MapEntry *cur;
    printf("Object Map count=%d\n", self->__count);
    for(cur = self->__head; cur != NULL ; cur = cur->__next ) {
         printf("  %s=%d\n", cur->key, cur->value);
    }
}

struct MapEntry* __Map_find(struct Map* self, char *key)
{
    struct MapEntry *cur;
    if ( self == NULL || key == NULL ) return NULL;
    for(cur = self->__head; cur != NULL ; cur = cur->__next ) {
        if(strcmp(key, cur->key) == 0 ) return cur;
    }
    return NULL;
}

/* Student code will be inserted here */

int main(void)
{
    struct Map * map = Map_new();
    struct MapEntry *cur;

    /* Make sure we see all output up to an error */
    setvbuf(stdout, NULL, _IONBF, 0); 

    printf("Map test\n");
    map->put(map, "z", 8);
    map->put(map, "z", 1);
    map->put(map, "y", 2);
    map->put(map, "b", 3);
    map->put(map, "a", 4);
    map->dump(map);

    printf("size=%d\n", map->size(map));

    printf("z=%d\n", map->get(map, "z", 42));
    printf("x=%d\n", map->get(map, "x", 42));

    map->del(map);
}


void __Map_put(struct Map* self, char *key, int value) {
    struct MapEntry *old, *new;
    char *new_key;
    if ( key == NULL ) return;

    old = __Map_find(self, key);
    if ( old != NULL ) {
        old->value = value;
        return;
    }

    new = malloc(sizeof(*new));

    /* Need some code here... */

    self->__count++;
}

int __Map_size(struct Map* self)
{
    return 42;
}

int __Map_get(struct Map* self, char *key, int def)
{
    /* You need some code here */
    return def;
}

struct Map * Map_new() {
    struct Map *p = malloc(sizeof(*p));

    p->__head = NULL;
    p->__tail = NULL;
    p->__count = 0;
    return p;
}
