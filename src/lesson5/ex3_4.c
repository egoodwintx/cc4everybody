//---------------------------------------------------------
// file: itob_itoh.c
// project: Learning C
// author: Ed Goodwin
// date: 03.05.2024
// description:
//   convert a number to binary and hex Exercise 3.2
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itob(int n, char *s);
void itoh(int n, char *s);

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

void reverse(char *t)
{
    unsigned int i, j, len;
    char tmp;
    len = strlen(t);
    //printf("strlen %d\n", len);
    if (len > 0) {
        for(i=0, j=len-1;;i++,j--) {
            if (j<i) break;
            tmp = t[i];
            t[i] = t[j];
            t[j] = tmp;
        }
    }
    else {
        printf("Error: 0 length string passed as argument.\n");
    }        
    return;
}

void itob(int n, char s[])
{
    void reverse();
    const unsigned int bindiv = 2;
    unsigned int i = 0;
    while (n > 0) { 
        // storing remainder in binary array 
        s[i] = '0' + (n % bindiv);
        // printf("s[%d] = %c, n = %d\n", i, s[i], n); 
        n = n / bindiv; 
        i++; 
    }
    s[i] = '\0';
    // printf("s[%d] = EOS\n", i);
    // printf("string: %s\n", s);
    reverse(s);
}

void itoh(int n, char s[])
{
    void reverse();
    const int hexdiv = 16;
    int i = 0;
    while (n > 0) {
        int convertToHex = n % hexdiv;
        switch(convertToHex){
            case 10:
                s[i] = 'a';
                break;
            case 11:
                s[i] = 'b';
                break;
            case 12:
                s[i] = 'c';
                break;
            case 13:
                s[i] = 'd';
                break;
            case 14:
                s[i] = 'e';
                break;
            case 15:
                s[i] = 'f';
                break;
            default:
                s[i] = '0' + convertToHex;
        }
        n = n / hexdiv;
        i++;
    }
    s[i]='\0';
    reverse(s);
}

