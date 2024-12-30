//---------------------------------------------------------
// file: LBS290_ex16.c
// project: Learning C for Everyone
// author: Ed Goodwin
// date: 04.03.2024
// description:
//   a simple calculator program that uses an accumulator
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[256];
    char opcode;
    float value, display = 0.0;

    while(fgets(line, 256, stdin) != NULL) {
        // Use sscanf to parse data from a string
        sscanf(line, "%c %f", &opcode, &value);
        if ( opcode == 'S' ) break;
        // display += value;
        switch(opcode) {
            case '=':
                display = value;
                break;

            case '+':
                display += value;
                break;

            case '-':
                display -= value;
                break;

            case '/':
                display /= value;
                break;

            case '*':
                display *= value;
                break;

            default:
                break;
        }
        printf("Display: %.2f\n", display);
    }
}
