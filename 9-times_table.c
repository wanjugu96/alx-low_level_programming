//#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
    int mult = 0;
    int initial = 0;
    int  num = 0;
    char numm;
    char initiall;
    while (mult <= 9)
    {
        putchar('0');
        for (initial = 0; initial <= 9; initial++)
        {
           num = initial * mult;
           numm =( num) + '0';
            //initiall = initial + '0';
           

           putchar(',');
           putchar(' ');
           
            putchar(numm);
            putchar(' ');
           
        }
        putchar('\n');
        mult++;
    }
}
int main(void)
{
    times_table();
    return (0);
}
