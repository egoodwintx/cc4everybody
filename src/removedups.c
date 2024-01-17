//---------------------------------------------------------
// file: removedups.c
// project: Learning C
// author: Ed Goodwin
// date: 01.16.2024
// description:
//  remove duplicate spaces (' ') from an input string
//  Exercise 1.7
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 0;
    int prevc = 0;

    while ((c = getchar() != EOF)) {
        if (c == ' ' && prevc == ' '){
            prevc = c;
        }
        else {
            prevc = c;
            putchar(c);
        }

    }
}