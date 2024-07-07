//---------------------------------------------------------
// file: exRS8.c
// project: Learning C
// author: Ed Goodwin
// date: 07.07.2024
// description:
//   convert the python code to C
/*
while True:
    try:
        line = input()
    except:  # If we get EOF
        break
    line = line.strip()
    guess = int(line)
    if guess == 42:
        print('Nice work!')
        break
    elif guess < 42 :
        print('Too low - guess again')
    else :
        print('Too high - guess again')
*/
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
