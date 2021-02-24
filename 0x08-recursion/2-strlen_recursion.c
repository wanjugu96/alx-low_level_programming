#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s -string to be counted lenghth
 * Return: lenghth of string.
 */
int _strlen_recursion(char* s)
{
    int k = 0;
    
   if (*s == '\0')
    {
       return (0);
    }
   else
   {
       return (1+_strlen_recursion(s + 1));
   }
  
}
