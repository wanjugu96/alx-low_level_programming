#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _puts_recursion(char* s)
{
    int  i;

   for(i=0; *(s + i) != '\0'; i++)
       
    {
        putchar(s[i]);
    }
   putchar('\n');
}
