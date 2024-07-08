//---------------------------------------------------------
// file: ex1_4.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() /* Fahrenheit-Celsius table */
{
    int cel;
    float fahr = 0.0;
    //printf("CELSIUS  FAHR\n");
    //printf("-------------\n");
    for (cel = 0; cel <= 100; cel += 20) {
        fahr = (9.0/5.0)*cel + 32;
        printf("%4d %6.1f\n", cel, fahr);
    }
}