//---------------------------------------------------------
// file: ex1_3.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//  F to C converter
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

main() /* Fahrenheit-Celsius table */
{
    int fahr;
    printf("FAHR   CELSIUS\n");
    printf("---------------\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 40)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}