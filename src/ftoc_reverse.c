//---------------------------------------------------------
// file: ftoc_reverse.c
// project: Learning C
// author: Ed Goodwin
// date: 01.14.2024
// description:
//   Fahrenheit to Celsius table output
//   Exercise 1.5
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

main() /* Fahrenheit-Celsius table */
{
    int fahr;
    //printf("FAHR  CELSIUS\n");
    //printf("-------------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}