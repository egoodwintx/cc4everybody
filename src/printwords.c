//---------------------------------------------------------
// file: printwords.c
// project: Learning C
// author: Ed Goodwin
// date: 01.16.2024
// description:
//  prints the words in its input, one per line
//  Exercise 1-10
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if(c == ' '){
            putchar('\n');
        }
        else {
            putchar(c);
        }
    }

}