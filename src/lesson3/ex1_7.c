//---------------------------------------------------------
// file: ex1_7.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

main() {
    int c = 0;
  	int prevc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && prevc == ' '){
          prevc = c;
    	}
      	else {
          prevc = c;
          putchar(c);
        }
    }
}