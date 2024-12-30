//---------------------------------------------------------
// file: ex2_2.c
// project: Learning C
// author: Ed Goodwin
// date: 01.19.2024
// description:
//  simple program that includes htoi function
//  that converts from hex to int
//---------------------------------------------------------
#include <stdio.h>

int atoi(char s); /* convert s to integer */
int htoi(char s[]); /* converts from hex */

int exponentInt(const int base, int n) {
  int i, p = base;
  if (n == 0) {
    return 1;
  }
  for (i = 1; i < n; ++i) p *= base;
  return p;
}

int htoi(char s[]) {
  const int a = 10;
  const int b = 11;
  const int c = 12;
  const int d = 13;
  const int e = 14;
  const int f = 15;
    
  int i, n, value, stringlength;
  i = 0;
  n = 0;
  value = 0;
  stringlength = 0;

  // get string length
  while (s[i] != '\0'){
    stringlength++;
    i++;
  }
  //printf("%d\n", stringlength);

  for (i=0; i < stringlength; ++i){
    //printf("i value %d %d\n", i, value);
  
    if (s[i] >= '0' && s[i] <= '9'){
      
      n = atoi(s[i]);
      //printf("atoi %c %d %d\n", s[i], stringlength - i - 1, n);
      //printf("Num %c %d %d %d\n", s[i], i, value, exponentInt(16, stringlength - i - 1));

      value += n * exponentInt(16, stringlength - i -1);
    }

    else if( (s[i] >= 'a' && s[i] <= 'f') || (s[i] >= 'A' && s[i] <= 'F')) {
      //printf("In alpha branch %c\n", s[i]);

      switch (s[i]) {
        case 'a':
        case 'A':
          n = a;
          break;
        case 'b':
        case 'B':
          n = b;
          break;
        case 'c':
        case 'C':
          n = c;
          break;
        case 'd':
        case 'D':
          n = d;
          break;
        case 'e':
        case 'E':
          n = e;
          break;
        case 'f':
        case 'F':
          n = f;
          break;
        default:
          n = 0;
      }
      value += (n * exponentInt(16, stringlength - i - 1));
      //printf("Chr %c %d %d %d\n", s[i], i, value, exponentInt(16, stringlength - i -1));
      //printf("ctoi %c %d %d\n", s[i], stringlength - i - 1, n);
    }
  }
  return value;
}

int atoi(char s) /* convert s to integer */
{
    int n;
    n = 0;
    n = s - '0';
    return(n);
}

int main(void) {
  //printf("%d\n", '3' - '0');
  // printf("%d\n", exponentInt(16, 1));
  // printf("%d\n", exponentInt(16, 2));
  // printf("%d\n", exponentInt(16, 3));
  // printf("%d\n", exponentInt(16, 4));
  //printf("htoi('b0000') = %d\n", htoi("b0000"));
  printf("htoi('bcd3e') = %d\n", htoi("bcd3e"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}