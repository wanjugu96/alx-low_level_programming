#include "holberton.h"
/**
 * _strspn - Returns the length of the initial portion of str1 which consists only of characters that are part of str2.
 * @s- string to be scanned
 * @c- C string containing the characters to match
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
    int i;
    int j;
    int z = 0;
    unsigned int k = 0;

    while (s[z] != ' ')
    {
        z++;
    }
    for (i = 0; i < z; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                k++;
            }
        } 
    }
    return (k);
}
