#include <stdlib.h>
#include "holberton.h"
/**
 * main - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str -str to be copied.
 * Return: Always 0 returns a pointer to a newly allocated space in memory.
 */
char* _strdup(char* str)
{
    int z = 0;
    int i = 0;
    char* ar;

    if (str == NULL)
        return (NULL);

    while (str[z] != '\0')
    {
        z++;
    }

    ar = malloc(z * sizeof(char));

    while (i <= z)
    {
        ar[i] = str[i];
        i++;
    }
    
    return (ar);
    free(ar);
}
