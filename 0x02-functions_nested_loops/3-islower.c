
#include "holberton.h"
#include < ctype.h >

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c) 
{
    int i;
    i = islower(c);
    if (i > 0)
    {
        return 1;
    }
    else
    {
        return(0);
    }
}
    int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
   _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
