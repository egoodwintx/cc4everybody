//---------------------------------------------------------
// file: pythonstr_class.c
// project: Learning C
// author: Ed Goodwin
// date: 07.15.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// dictionary node
struct dnode {
    char *key;
    char *value;
    struct dnode *next;
};

// dictionary
struct pydict {
  struct dnode *head;
  struct dnode *tail;
  int count;
};

/* print(dct) */
/* {'z': 'W', 'y': 'B', 'c': 'C', 'a': 'D'} */
void pydict_print(struct pydict* self)
{
  struct dnode* cur;
  int count = 0;
 
  printf("{");
  if (self->head != NULL) {
    cur = self->head;
    printf("'%s':'%s'", cur->key, cur->value);
    count++;
  
    while (count < self->count) {
      if (cur->next != NULL) {
	cur = cur->next;
	count++;
	printf(", '%s': '%s'", cur->key, cur->value);
      }
    }
  }
  printf("}\n");
}

int pydict_len(const struct pydict* self)
{
    return self->count;
}

/* find a node - used in get and put */
struct dnode* pydict_find(struct pydict* self, char *key)
{
    return NULL;
}

/* x.get(key) - Returns NULL if not found */
char* pydict_get(struct pydict* self, char *key)
{
    return NULL;
}

/* x[key] = value; Insert or replace the value associated with a key */
void pydict_put(struct pydict* self, char *key, char *value)
{
  struct dnode* newnode = malloc(sizeof(struct dnode*));

  newnode->key = key;
  newnode->value = value;
  if (self->head == NULL){
    self->head = newnode;
    self->tail = newnode;

  }
  if (self->tail != NULL) {
    (self->tail)->next = newnode;
  }    
  self->tail = newnode;
  self->count++;
}


/* Constructor - dct = dict() */
struct pydict * pydict_new() {
    struct pydict *p = malloc(sizeof(*p));
    p->head = NULL;
    p->tail = NULL;
    p->count = 0;
    return p;
}

/* Destructor - del(dct) */
void pydict_del(struct pydict* self) {
    struct dnode *cur, *next;
    cur = self->head;
    while(cur) {
        free(cur->key);
        free(cur->value);
        next = cur->next;
        free(cur);
        cur = next;
    }
    free((void *)self);
}

int main(void)
{
    struct dnode * cur;
    struct pydict * dct = pydict_new();

    setvbuf(stdout, NULL, _IONBF, 0);  /* Internal */

    pydict_put(dct, "z", "Catch phrase");
    pydict_print(dct);
    pydict_put(dct, "z", "W");
    pydict_print(dct);
    pydict_put(dct, "y", "B");
    pydict_put(dct, "c", "C");
    pydict_put(dct, "a", "D");
    pydict_print(dct);
    printf("Length =%d\n",pydict_len(dct));

    printf("z=%s\n", pydict_get(dct, "z"));
    printf("x=%s\n", pydict_get(dct, "x"));

    printf("\nDump\n");
    for(cur = dct->head; cur != NULL ; cur = cur->next ) {
        printf("%s=%s\n", cur->key, cur->value);
    }

    pydict_del(dct);
}
