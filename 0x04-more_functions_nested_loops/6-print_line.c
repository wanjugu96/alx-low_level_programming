#include "holberton.h"

/**
 * main - draws a straight line in the terminal
 * @ int n- number tof times _ is sprinted
 * Return: Always 0.
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {

        int i = 0;
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');

    }
}
