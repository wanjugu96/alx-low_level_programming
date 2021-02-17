#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void puts_half(char* str)
{
    int z=0;
    int i = 0;
    int he;
    int ho;
 
    while (str[z] != '\0')
    {
        z++;
    }
    he = z / 2;
    ho = (z - 1) / 2;
    if (z % 2 == 0)
    {
        for (i = he; i <= z; i++)
        {
            _putchar(str[i]);
        }
    }
    else
    {
        for (i = ho; i <= z; i++)
        {
            _putchar(str[i]);

        }
    }
   
}
