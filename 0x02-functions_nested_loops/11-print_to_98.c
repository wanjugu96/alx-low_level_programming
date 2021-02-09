#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n);
void print_to_98(int n)
{
    int i =  n;
    for (i = n; i <= 98; i++)
    {
        printf("%d", i);
        if (i != 98)
        {
            printf(", ");
        }
      
    }
    //printf("\n");
    //printf("\n");
}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
