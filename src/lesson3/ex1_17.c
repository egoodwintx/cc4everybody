//---------------------------------------------------------
// file: ex1_17.c
// project: 
// author: Ed Goodwin
// date:
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

void reverse(char s1[]) {

    char r[MAXLINE];
    int strlength = 0;
    int i = 0;
    
    while (s1[strlength] != '\0') {
        ++strlength;
    }
    //strlength +=;
    
    // printf("%d\n", strlength);

    // reverse read into r char array
    int j = strlength -1;
    for (i=0; i < strlength; i++){
         r[i] = s1[j];
         j--; 
    }
    r[strlength] = '\0';

    // read r in to s1
    for (i=0; i <strlength; i++) {
      s1[i] = r[i];
      //      printf("%c %c\n", s1[i], r[i]);
    }
    
    return;
}

int main() {
  printf("Need to define main().\n");
}