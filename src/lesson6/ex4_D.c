//---------------------------------------------------------
// file: ex4_D.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int sumseries(int n){
    if(n < 0) {
        return 0;
    }

    if(n > 100) {
        return -1;
    }
    n += sumseries(n-1);
    return n;
}

int main() {
  printf("sumseries(0) returns %d\n", sumseries(0));
  printf("sumseries(1) returns %d\n", sumseries(1));
  printf("sumseries(5) returns %d\n", sumseries(5));
  printf("sumseries(42) returns %d\n", sumseries(42));
  printf("sumseries(-42) returns %d\n", sumseries(-42));
  printf("sumseries(100) returns %d\n", sumseries(100));
  printf("sumseries(101) returns %d\n", sumseries(101));
  printf("sumseries(1000) returns %d\n", sumseries(1000));
}