#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
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
    printf("\n");
}
