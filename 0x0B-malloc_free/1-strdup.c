#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
