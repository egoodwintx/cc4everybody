//---------------------------------------------------------
// file: ex3_4.c
// project: Learning C
// author: Ed Goodwin
// date: 01.25.2024
// description:
//      itoh and itob function examples convert to octal
//      and binary
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itob(n, s)
int n;
char s[];
{
    void reverse();
    strcpy(s,"101010");
}

void itoh(n, s)
int n;
char s[];
{
    void reverse();
    strcpy(s,"2a");
}

int main() {
  char s[1000];
  void itob(), itoh(), reverse();

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
}

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}