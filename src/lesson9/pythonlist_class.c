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

struct lnode {
    char *text;
    struct lnode *next;
};

struct pylist {
  struct lnode *head;
  struct lnode *tail;
  int count;
};

/* print(lst) */
void pylist_print(struct pylist* self)
{
    printf("List count: %d\n", self->count);
    struct lnode *cur, *next;
    int i = 0;
    if(self->head != NULL) {
        cur = self->head;
        printf("['%s'", cur->text);

        for (i=0; i < self->count; i++) {
             if (cur->next != NULL){
	       cur = cur->next;
	       printf(",'%s'", cur->text);
             }
        }
    }
    else {
        printf("[");
    }
    printf("]\n");

    /* About 10 lines of code 
       The output should match Python's
       list output

       ['Hello world', 'Catch phrase']

	Use printf cleverly, *not* string
	concatenation since this is C, not Python.
    */
}
/* len(lst) */
int pylist_len(const struct pylist* self)
{
    /* One line of code */
    return self->count;
}

/* lst.append("Hello world") */
void pylist_append(struct pylist* self, char *str) {
    /* Review: Chapter 6 lectures and assignments */
    struct lnode* newtail = malloc(sizeof(*newtail));
    
    newtail->next = NULL;
    newtail->text = (char*)malloc(strlen(str) * sizeof(char));
    strncpy(newtail->text, str, (int)strlen(str));

    if (self->head == NULL) {
        self->head = newtail;
    }
    if (self->tail != NULL) {
        self->tail->next = newtail;
    }
    self->tail = newtail;
    self->count++;
}
/* lst.index("Hello world") - if not found -1 */
int pylist_index(struct pylist* self, char *str)
{
    struct lnode* cur = self->head;
    int counter = 0;
    while (cur) {
        counter++;
        if (strcmp(cur->text, str) == 0) {
            return counter;
        }
        else {
            cur = cur->next;
        }
    }
    /* Seven or so lines of code */
    return -1;
}

/* Constructor - lst = list() */
struct pylist * pylist_new() {
    struct pylist *p = malloc(sizeof(*p));
    p->head = NULL;
    p->tail = NULL;
    p->count = 0;
    return p;
}

/* Destructor - del(lst) */
void pylist_del(struct pylist* self) {
    struct lnode *cur, *next;
    cur = self->head;
    while(cur) {
      free(cur->text);
      if (cur->next != NULL) {
	//printf("In the delete and cur->next exists\n");
    	next = cur->next;
    	free(cur);
    	cur = next;
      }
      
    }
    free((void *)self);
}

int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);  /* Internal */

    struct pylist * lst = pylist_new();
    pylist_append(lst, "Hello world");
    pylist_print(lst);
    pylist_append(lst, "Catch phrase");
    pylist_print(lst);
    pylist_append(lst, "Brian");
    pylist_print(lst);
    printf("Length = %d\n", pylist_len(lst));
    printf("Brian? %d\n", pylist_index(lst, "Brian"));
    printf("Bob? %d\n", pylist_index(lst, "Bob"));
    //    pylist_del(lst);
}
