#include "holberton.h"

/**
 * main - copy string
 *@char *dest, char *src, int n
 * Return: pointer to string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
    int z = 0;
    int j = 0;
    while (dest[z] != '\0')
    {
        z++;
    }
    for (j = 0; j < z; j++)
    {
        if (j <n)
        {
            dest[j] = src[j];
        }
        
    }
    return dest;
}
