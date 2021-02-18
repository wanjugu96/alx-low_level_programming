#include "holberton.h"
/**
 * char* _strcat - concatenates two strings
 *
 * Return: a pointer to the resulting string dest
 */
char* _strcat(char* dest, char* src)
{
    int i = 0;
    int z = 0;
    while (dest[z] != '\0')
    {
        z++;
    }
    for (i=0; src[i]!='\0'; i++, z++)
    {
        dest[z] = src[i];
    }
    dest[z] = '\0';
   
   return dest;
}
