#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 * @ int n- number tof times / is sprinted
 * Return: Always 0.
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i = 0;
        int j = 0;
        int count = 0;
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                if (j == i)
                    _putchar('//');
                else
                    _putchar(' ');
            }
            _putchar('\n');
        }
    }
}
