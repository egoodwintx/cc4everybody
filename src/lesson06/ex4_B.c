//---------------------------------------------------------
// file: ex4_B.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

extern int bumper;
int bumper = -1;

int bump() {
  bumper += 1;
  return bumper;
}

int main() {
  int bump();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}