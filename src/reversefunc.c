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
    //reverse(*t);
    //printf("%s\n", t[strlen(t)]);
}

void copy(s1, s2)
char s1[], s2[];
{
    int i;
    for (i=0; (s2[i] = s1[i]); i++)
    
    return;
}


void reverse(char t[]) {
    char r[1000];
    int j = strlen(t); //reverse index
    //printf("%d\n", j);
    for(int i=0; i < strlen(t); i++){
        t[i] = r[j--];
    }
    return;
}