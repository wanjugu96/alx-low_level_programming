#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void puts2(char* str)
{
    int z=0;
    int i = 0;
 
    while (str[z] != '\0')
    {
        z++;
    }
    for (i = 0; i <= z; i++)
    {
        if (i % 2== 0)
        {
            _putchar(str[i]);
        }
       
    }
  _putchar('\n');
}
