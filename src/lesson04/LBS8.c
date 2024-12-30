//---------------------------------------------------------
// file: avg.c
// project: Learning C
// author: Ed Goodwin
// date: 01.20.2024
// description:
//  Exercise 8
//  produce average and total from 5 floating point nums
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>


float average(float f[], int n) {
  float average = 0;
  int i;
  for (i=0; i < n; i++) {
      average += f[i];
  }
  return average/n;
}

float total(float f[], int n) {
  float total = 0;
  int i;
  for (i=0; i < n; i++) {
      total += f[i];
  }
  return total;
}

int main () {
  //float numbers[] = {10.0, 5.0, 15.0, 20.0, 10.0};
  float f[5];
  int i;
  for (i=0; i < 5; i++) {
    printf("Enter a number:");
    scanf("%f",&f[i]);
  }

  printf("The total is: %.1f\n", total(f, 5));
  printf("The average is: %.1f\n", average(f,5));
  return 0;
}