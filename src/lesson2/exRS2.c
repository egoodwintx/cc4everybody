//---------------------------------------------------------
// file: exRS2.c
// project: Learning C
// author: Ed Goodwin
// date: 05.05.2024
// description:
//  
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() {
  int usf;
  int euf;
  printf("Enter US Floor\n");
  scanf("%d", &usf);
  euf = usf - 1;
  printf("EU Floor %d\n", euf);
}