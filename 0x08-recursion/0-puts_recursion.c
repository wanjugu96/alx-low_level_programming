#include "holberton.h"

/**
 * _puts_recursionn - prints string
 * @*s -string to be printed
 * Return:printed string
 */
void _puts_recursion(char* s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return (0);
    }
  
    _putchar (*s);
      _puts_recursion(s+1) ;
}
