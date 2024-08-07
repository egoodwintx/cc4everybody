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


struct pystr
{
    int length;
    int alloc; /* the length of *data */
    char *data;
};

/* x = x + 'h'; */

void pystr_append(struct pystr* self, char ch) {
    /*  initial alloc is 10 characters long.
        if string is longer than 10 characters
        call realloc and increase size of char[] */
    if (self->length >= (self->alloc - 2)) {
        self->alloc = self->alloc + 10;
        self->data = (char*) realloc(self->data, self->alloc);
    }
    self->data[self->length] = ch;
    self->length = (self->length) + 1;
    
}

/* x = x + "hello"; */

void pystr_appends(struct pystr* self, char *str) {
    /* Need a line or two of code here */
    for (int i=0; str[i] != '\0'; i++) {
        pystr_append(self, str[i]);
    }
}
/* x = "hello"; */

void pystr_assign(struct pystr* self, char *str) {
    /* Need about three lines of code here */
    self->length=0;
    pystr_appends(self, str);
}

/* Constructor - x = str() */
struct pystr * pystr_new() {
    struct pystr *p = malloc(sizeof(*p));
    p->length = 0;
    p->alloc = 10;
    p->data = malloc(10);
    p->data[0] = '\0';
    return p;
}

/* Destructor - del(x) */
void pystr_del(const struct pystr* self) {
    free((void *)self->data); /* free string first */
    free((void *)self);
}

void pystr_dump(const struct pystr* self)
{
    printf("Pystr length=%d alloc=%d data=%s\n",
            self->length, self->alloc, self->data);
}

int pystr_len(const struct pystr* self)
{
    return self->length;
}

char *pystr_str(const struct pystr* self)
{
    return self->data;
}


int main(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);  /* Internal */

    struct pystr* x = pystr_new();
    pystr_dump(x);

    pystr_append(x, 'H');
    pystr_dump(x);

    pystr_appends(x, "ello world");
    pystr_dump(x);

    pystr_assign(x, "A completely new string");
    printf("String = %s\n", pystr_str(x));
    printf("Length = %d\n", pystr_len(x));
    pystr_del(x);
}