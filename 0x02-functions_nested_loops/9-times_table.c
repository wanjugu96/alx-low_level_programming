#include "holberton.h"
/**
* times_table - 9 .. times tables 
*  return
*/
void times_table(void)
{
    int i = 0;
    int mult = 0;
    int num;
    while (mult <= 9)
    {
    for (i = 0; i <= 9; i++)
    {
        num = i * mult;
        if (num >= 10)
        {
            putchar('0' + (num / 10));
            putchar('0' + (num % 10));
        }
        else
        {
            putchar(num);nn
        }
            
    }
    putchar('\n');
    mult++;
}
}
