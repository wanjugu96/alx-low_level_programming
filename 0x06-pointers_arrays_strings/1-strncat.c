#include "holberton.h"

/**
 *char* _strncat - concatenated s1
 *
 * Return: pointer to s1.
 * @char* dest, char* src, int n
 */
char* _strncat(char* dest, char* src, int n)
{

    int i = 0;
    int z = 0;
    int k = sizeof(src);
    while (dest[z] != '\0')
    {
        z++;
    }
    for (i=0; i< n; i++, z++)
    {
        dest[z] = src[i];
    }
    if (sizeof(src)< n)
    {
        dest[z] = '\0';
    }
    
   
   return dest;
}
