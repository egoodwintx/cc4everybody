//---------------------------------------------------------
// file: exRS12.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void py_lstrip(char *s) {
    int len = strlen(s);
  	int i;

    for (i = 0; i < len; i++) {
        if (s[i] != ' ') {
            int j = 0;
            int k = i;
            for(j = 0; j < len - i; j++){
                s[j] = s[k];
                k++;
            }
            s[len - i] = '\0';
            return;
        }
    }
}

int main() {
    char s1[] = "   Hello   World    ";
    void py_lstrip();
    py_lstrip(s1);
    printf("-%s-\n", s1);
}