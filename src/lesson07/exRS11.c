//---------------------------------------------------------
// file: exRS11.c
// project: Learning C
// author: Ed Goodwin
// date: 05.27.2024
// description:
//
//---------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void py_rstrip(char *s) {
    int len = strlen(s);
  	int i;
    int hashadchar = -1;

    for (i = len - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            hashadchar = 0;
            if (s[i+1] == ' ') {
                s[i+1] = '\0';
            }
            return;
        }
    }
}

int main() {
    char s1[] = "   Hello   World    ";
    void py_rstrip();
    py_rstrip(s1);
    printf("-%s-\n", s1);
}