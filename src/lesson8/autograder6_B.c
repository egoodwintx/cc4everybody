#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};

void list_remove(lst, value)
    struct list *lst;
    int value;
{
    struct lnode *cur = NULL;
    struct lnode *prior = NULL;
    bool priortracking = false;
    prior = lst->head;

    /* Remove the value from the linked list. */
    for(cur = lst->head; cur != NULL; cur = cur->next) {

        if ((lst->head)->value != value) {
            if (cur->value == value) {
                prior->next = cur->next;
                if (prior->next == NULL) {
                    lst->tail = prior;
                }
            }
            else {
                if (priortracking) {
                  prior = prior->next;
                }
            }
            priortracking = true;
        }
        else {
            lst->head = cur->next;
            prior = lst->head;
            priortracking = false;
        }
    }
}

void list_add(lst, value)
    struct list *lst;
    int value;
{
    /* Append the value to the end of the linked list. */
    struct lnode *newnode = malloc(sizeof(struct list));
    // create a new node and add the value to it
    // it will go on the end, so set next to NULL
    newnode->value = value;
    newnode->next = NULL;    
    
    if(lst->head == NULL){
         lst->head = newnode;
         lst->tail = newnode;
    }
    else {
        // grab the last node in the list, it's next member is NULL
        // set tailnode->next = new node you just created
        (lst->tail)->next = newnode;
        lst->tail = newnode;
    }
}

int main()
{
    void list_add();
    void list_dump();
    struct lnode * list_find();

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    list_remove(&mylist, 42);

    list_remove(&mylist, 10);
    list_dump(&mylist);

    list_remove(&mylist, 30);
    list_dump(&mylist);

    list_add(&mylist, 40);
    list_dump(&mylist);

}

void list_dump(lst)
    struct list *lst;
{
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}