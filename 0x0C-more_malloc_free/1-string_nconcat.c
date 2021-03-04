#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1 -string 1
 * @s2 -string 2
 * Return: returned pointer shall point to a newly allocated space in memory, .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, k,sum = 0;
    char *ar;

    if (s1 == NULL)
    {
        j = 0;
    }
    else
    {
        for (j = 0; s1[j]; j++)
            ;
    }
    if (s2 == NULL)
    {
        k = 0;
    }
    else
    {
        for (k = 0; s2[k]; k++)
            ;
    }


    sum = j + k + 1;
    ar = malloc(sum * sizeof(char));
     
    if (ar == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < j; i++)
    {
        ar[i] = s1[i];
    }
    for (i = 0; i <= n; i++)
    {
        ar[i+j] = s2[i];
    }
    ar[j+n] = '\0';
    return (ar);
    free(ar);
}
