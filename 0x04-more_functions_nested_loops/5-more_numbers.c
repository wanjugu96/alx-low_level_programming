#include "holberton.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int z = 0;
    
    while (z <= 10)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9)
            {
                int j = i / 10;
                int k = i % 10;
                putchar(j + '0');
                putchar(k + '0');

            }
            else
            {
                putchar(i + '0');
            }
            //i++;
        }
        z++;
        putchar('\n');
     
    }
}