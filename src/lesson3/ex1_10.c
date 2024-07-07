//---------------------------------------------------------
// file: ex1_10.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' '){
          putchar('\n');
    	}
      else {
        putchar(c);
      }
    }
}
