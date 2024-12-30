//---------------------------------------------------------
// file: exRS9
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//   write a function in C that does
/*
def mymult(a,b):
    c = a * b
    return c
*/
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int mymult(int a, int b) {
  int c = a * b;  
  return c;
}

int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n",retval);
}