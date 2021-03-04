#include "holberton.h"
#include <stdlib.h>


/**
 * array_range - creates an array of integers.
 * @min: min int of array
 * @max: max in of array
 *
 * Return: If min > max, return NULL If malloc fails, return NULL
 */
int* array_range(int min, int max)
{
    int* ar;
    int i,j,size=0;
    

    if (min > max)
        return (NULL);

    for (i = min; i<= max; i++)
    {
        size++;

    }
   
    ar = malloc(size * sizeof(int));

    if (ar == NULL)
        return (NULL);
    
    j = 0;
    for (i = min; i <= max; i++)
    {
        ar[j] = i;
        j++;
    }

     
   return (ar);

}
