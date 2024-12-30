//---------------------------------------------------------
// file: exRS4.c
// project: Learning C
// author: Ed Goodwin
// date: 07.06.2024
// description:
//
//---------------------------------------------------------
#include <stdio.h>

int main() {
  size_t len = 100;
  char *line = NULL;
  
  printf("Enter line\n");
  getline(&line, &len, stdin);
  printf("Line: %s\n", line);
}
