#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of integers.
 * @a- multidimentional array
 * @size- size of array
 * Return: Always 0.
 */
void print_diagsums(int* a, int size)
{
    int i = 0;
    int sum = 0;
    int tot = size * size;
    int interval = size+1;
    int interval2 = size - 1;
    int j = size - 1;
    int sum2 = 0;

    while (i < tot)
    {
        sum = sum + a[i];
        i = i + interval;
    }
        while (j <= tot-size)
    {
        sum2 = sum2 + a[j];
        j = j + interval2;
    }
    printf("%d, %d\n", sum, sum2);
}
