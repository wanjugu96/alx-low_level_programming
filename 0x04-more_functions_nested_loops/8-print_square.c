#include "holberton.h"

/**
 *print_square - c prints a square, followed by a new line
 *
 * Return: Always 0.
 */
void print_square(int size)
{
    int i = 0;
    int j = 0;

    if (size > 0)
    {
        for (j = 0; j < size; j++)
        {
            for (i = 0; i < size; i++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    else
        putchar('\n');
}
