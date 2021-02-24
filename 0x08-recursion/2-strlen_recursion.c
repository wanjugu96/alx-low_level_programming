#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s -string to be counted lenghth
 * Return: lenghth of string.
 */
int _strlen_recursion(char *s)
{
    int k = 0;
    int i;
  
    while (s[k] != '\0')
    {
        k++;
    }
    return k;
}
