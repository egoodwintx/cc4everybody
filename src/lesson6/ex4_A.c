//---------------------------------------------------------
// file: ex4_A.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

double faren(double celsius)
{
  double fahren = (9.0/5.0)*(celsius) + 32.0;
  return fahren;
}

int main() {
  double faren();
  printf("faren(42) is %.1f\n", faren(42.0));
  printf("faren(0) is %.1f\n", faren(0.0));
  printf("faren(-10) is %.1f\n", faren(-10.0));
  printf("faren(32) is %.1f\n", faren(32.0));
  printf("faren(100) is %.1f\n", faren(100.0));
  printf("faren(212) is %.1f\n", faren(212.0));
}