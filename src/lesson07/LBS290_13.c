//---------------------------------------------------------
// file: calcpay.c
// project: Learning C
// author: Ed Goodwin
// date: 05.01.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

void calcpay(p,r,h)
    float *p,r,h;
{
	if (h > 40) {
      *p = (40 * r)+(1.5 * r)*(h - 40);
    }
  	else {
      *p = (h * r);
    }
}

void main(void) {
    double* p;
    calcpay(&p, 5.00, 40);
    printf("%4.3f\n", *p);
    calcpay(&p, 4.00, 45);
    //printf("%.6f", *p);
    calcpay(&p, 5.25, 10);
    //printf("%.6f", *p);
}