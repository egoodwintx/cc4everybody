//---------------------------------------------------------
// file: expander.c
// project: Learning C
// author: Ed Goodwin
// date: 01.21.2024
// description:
//  expand spaces to \t and end of string to \n
//---------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    char t[1000];
    void expand();
    expand("Hello world", t);
    printf("%s\n", t);
    expand("Hello world\n", t);
    printf("%s\n", t);
    expand("Hello\tworld\n", t);
    printf("%s\n", t);
    expand("Hello\tworld\nHave a nice\tday\n", t);
    printf("%s\n", t);
}

void expand(char s[], char t[]){
    int i=0;
    int j=0;

    for (i=0, j=0; s[i] != '\0'; i++, j++) {
        switch (s[i]) {
            case '\t':
                t[j] = '\\';
                j++;
                t[j] = 't';
                break;

            case '\n':
                t[j] = '\\';
                j++;
                t[j] = 'n';
                break;

            default:
                t[j] = s[i];    
                break;
        }
    }
}