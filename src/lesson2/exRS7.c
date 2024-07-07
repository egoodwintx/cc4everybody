//---------------------------------------------------------
// file: exRS7.c
// project: Learning C
// author: Ed Goodwin
// date: 07.06.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    size_t len = 1000;
    char line[1000];
    int minval = NULL;
    int maxval = NULL;
  
    fgets(line, 1000, stdin);

    while (*line != "done" || *line != EOF) {
       int i = atoi(line);
       if (maxval == NULL || i > maxval){
           maxval = i;
       }
       if (minval == NULL || i < minval){
            minval = i;    
       }
       fgets(line, 1000, stdin);
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}
