#include "holberton.h"

/**
 *  _strpbrk - Locate characters in string
 * @s -C string to be scanned 
 * @accept -C string containing the characters to match.
 * Return: Returns a pointer to the byte in s that matches one of the bytes in accept
 */
char* _strpbrk(char* s, char* accept)
{
    int i;
    int j;

    for (i = 0; i < s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                return (s + i);
                break;
            }
               
        }
    }
    return (0);
}
