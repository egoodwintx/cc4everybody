//---------------------------------------------------------
// file: reversefunc.c
// project: Learning C
// author: Ed Goodwin
// date: 01.16.2024
// description:
//  simple script that uses a reverse function that 
//  reverses characters in a string
//  Exercise 1-17
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000

void copy(char s1[], char s2[]);

void reverse(char s1[]);

int main() {
    char t[MAXLINE];

    copy("Hello World!", t);
    printf("%s\n", t);
    reverse(t);
    printf("%s\n", t);
}

void copy(s1, s2)
char s1[], s2[];
{
    int i = 0;

    while (s1[i] != '\0'){
        //printf("%c %d\n", s1[i], i);
        s2[i] = s1[i];
        //printf("%c %c %d\n", s1[i], s2[i], i);
        ++i;
    }
    return;
}


void reverse(char s1[]) {

    char r[MAXLINE];
    int strlength = 0;
    int i = 0;
    
    while (s1[strlength] != '\0') {
        ++strlength;
    }
    printf("%d\n", strlength);
    
    int j = strlength - 1;
    for(int i=0; i < strlength; i++){
         s1[i] = r[j];
         i++;
         j--; 
    }
    s1 = r;
    return;
}