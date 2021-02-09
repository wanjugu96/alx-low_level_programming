#include "holberton.h"
/**
* print_last_digit - Print last digit
*
* Return: return last didgit.
*/
int print_last_digit(int);
int print_last_digit(int num1)
{
    int num2;
    if (num1 < 0)
    {
        num2 = (num1 % 10) *1;
    }
    else
    {
        num2 = num1 % 10;
    }
    _putchar('0' + num2);
    return (num2);
}
