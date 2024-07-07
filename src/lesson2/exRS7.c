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
    int i = 1;
    

    while (scanf("%d", &i) != EOF) {
       if (maxval == NULL || i > maxval){
           maxval = i;
       }
       if (minval == NULL || i < minval){
            minval = i;    
       }
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}
