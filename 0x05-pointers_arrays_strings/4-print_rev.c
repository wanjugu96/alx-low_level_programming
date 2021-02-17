#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_rev(char* s)
{
    char* z;
   // z = &s[0];
    int count = 0;
    int i = 0;
    int temp;
  
        while (s[count] != '\0')
        {
            count++;
        }
        i = count;
        while (i>0)
        {
            _putchar(s[i]);
            i--;
        }
        _putchar('\n');
}
