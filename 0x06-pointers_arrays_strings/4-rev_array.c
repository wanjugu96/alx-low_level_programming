#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int* a, int n)
{
    int temp ;
    int i = 0;
    int last = n - 1;

    for (i = 0; i < last; i++,last--)
    {
       temp = a[i];
       a[i] = a[last];
       a[last] = temp;
    }
}
