#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -concatinates two strings
 * @s1 -string to concatenate
 * @ s2 -string to concatenate at the end of s1
 * Return: pointer to concatenated string
 */
char* str_concat(char* s1, char* s2)
{
    int z = 0;
    int k = 0;
    int n = 0;
    int i;
    char* ar;
    
    if (s1 == NULL)
    {
        z = 0;
    }
    else
    {
        while (s1[z] != '\0')
        {
            z++;
        }
    }
    if (s2 == NULL)
    {
        k == 0;
    }
    else
    {
        while (s2[k] != '\0')
        {
            k++;
        }
    }
    ar = malloc(tot_mem * sizeof(char));
    if (ar == NULL)
    {
        return (NULL);
    }
    for (i=0; i<z; i++)
    {
        ar[i] = s1[i];
    }
    for(i=0; i < k; i++)
    {
        ar[i+z] = s2[i];
    }
    ar[z+k] = '\0';

    return (ar);
    free(ar);
}
