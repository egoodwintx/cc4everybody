//---------------------------------------------------------
// file: ex4_C.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

static int bumper = -1;

int bump()
{
  bumper += 1;
  return bumper;
}

void start(int n) {
    bumper = n;
}

int main() {
  int bump();
  void start();
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
  start(42);
  printf("bump() returns %d\n", bump());
  printf("bump() returns %d\n", bump());
}