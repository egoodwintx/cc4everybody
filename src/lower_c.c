//---------------------------------------------------------
// file: lower_c.c
// project: Learning C
// author: Ed Goodwin
// date: 01.20.2024
// description:
//   to lowercase function
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int lower(c) /* convert c to lower case; ASCII only */
int c;
{
  return ((c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c);
}

int main() {
    printf("%c\n", lower('C'));
    printf("%c\n", lower('f'));

}