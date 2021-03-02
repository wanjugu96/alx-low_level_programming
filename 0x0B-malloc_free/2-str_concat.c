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
    int i = 0;
  int tot_mem = 0;
    char* ar;

    while (s1[z] !='\0')
    {
        z++;
    }
  
    while (s2[k] != '\0')
    {
        k++;
    }
    
    ar = malloc(tot_mem * sizeof(char));

        while (i <= z)
        {
            ar[i] = s1[i];
            i++;
        }
        while (n<= k)
        {
            ar[z] = s2[n];
            z++;
            n++;
        }
  ar[tot_mem-2] = '\0';

        return (ar);
        free(ar);
}
