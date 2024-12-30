//---------------------------------------------------------
// file: exRS10.c
// project: Learning C
// author: Ed Goodwin
// date: 05.27.2024
// description:
// Write a C program to prompt for two strings and concatenate them as shown 
// in the Python code below. Use the functions strcpy and strcat from the 
// string.h library in your code. Pre-allocate your character arrays large 
// enought to handle up to 100 characters on input for each string (i.e. do not 
// use malloc as we have not yet covered that yet). 
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void gets(char* a) {
    //return 1;
}

int main(void) {
    
    int size = 100; 
    char first[size], second[size], concatstr[(2 * size + 4)];
    printf("Enter two strings\n");
    gets(first);
    gets(second);
    strcpy(concatstr, first);
    strcat(concatstr, " & ");
    strcat(concatstr, second);
    printf("%s\n", concatstr);
    return 0;
}