#include "holberton.h"
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
    int i;
    i = isalpha(c);
    if (i > 0)
    {
        return 1;
    }
    else
    {
        return (0);
    }
}
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
     _putchar(r + '0');
    r = _isalpha(108);
     _putchar(r + '0');
    r = _isalpha(';');
     _putchar(r + '0');
     _putchar('\n');
    return (0);
}
