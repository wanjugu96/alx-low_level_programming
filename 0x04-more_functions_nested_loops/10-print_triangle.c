#include "holberton.h"

/**
 * print_triangle - function that prints a triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
    int i = 0;
    int j = 0;
    int k = 0;
     
    if (size > 0)
    {
        for (j = 0; j < size; j++)
        {
            for (i = 0; i <= size; i++)

            {
                if (i < size - j)
                {
                    _putchar(' ');

                }
                else
                {
                    _putchar('#');
                }


            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }

    
}
