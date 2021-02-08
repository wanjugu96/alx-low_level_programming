//#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
//int print_last_digit(int);
int print_last_digit(int num1)
{
    int num2;
    num2= num1 % 10;
        return num2;
        
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}
