//---------------------------------------------------------
// file: ex1_6.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main() /* count new lines in input */
{
    int c, nl, blanks;
    nl = blanks = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++blanks;
    }
    
    printf("%d %d\n", blanks, nl);
    return 0;
}