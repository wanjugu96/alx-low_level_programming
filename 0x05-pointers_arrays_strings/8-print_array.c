#include "holberton.h"
#include <stdio.h>
void print_array(int* a, int n)
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        a[i] = *(a + i);
        printf("%d", a[i]);
        if (i != n-1)
        { 
            printf(", ");
        }
        
    }
}
