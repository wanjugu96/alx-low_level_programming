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
        putchar('\n');
    }
    else
    {
        int i = 0;
        int j = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                    putchar('//');
                else
                    putchar(' ');
            }
            putchar('\n');
        }

        return 0;
    }
}
