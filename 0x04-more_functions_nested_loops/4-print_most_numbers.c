#include "holberton.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2&4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
    int c = '0';
    for (c = '0'; c <= '9'; c++)
    {
        if (c != '4' && c != '2')
            putchar(c);
    }
    putchar('\n');
}
