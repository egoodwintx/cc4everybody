//---------------------------------------------------------
// file: countnl.c
// project: Learning C
// author: Ed Goodwin
// date: 01.14.2024
// description:
//  count blanks and newlines
//  Exercise 1.6
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() /* count new lines in input */
{
    int c, nl, blanks;
    nl, blanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++blanks;
    }
    
    printf("Newlines: %d\nBlanks: %d\n", nl, blanks);
    return 0;
}