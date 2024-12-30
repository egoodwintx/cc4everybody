//---------------------------------------------------------
// file: str_uniq.c
// project: Learning C
// author: Ed Goodwin
// date: 03.21.2024
// description:
//  reimplement UNIX uniq program
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char line[MAX_LINE_LENGTH];
    char keep[MAX_LINE_LENGTH];
    
    // Keep reading lines until an empty line is encountered
    while (1) {
        // Read a line from stdin
        if (fgets(line, MAX_LINE_LENGTH, stdin) == NULL || strcmp(line, "\n") == 0) {
            // If fgets returns NULL (EOF) or an empty line is encountered, break the loop
            break;
        }
        if (strcmp(keep, line) == 0){
            continue;
        }
        else {
            strcpy(keep, line);
            printf("%s",keep);
            continue;
        }
    }
    
    return 0;
}