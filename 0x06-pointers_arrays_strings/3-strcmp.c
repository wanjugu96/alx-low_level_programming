#include "holberton.h"

/**
 *_strcmp - compares two strings
 *@char* s1, char* s2
 * Return: int
 */
int _strcmp(char* s1, char* s2)
{
    int z = 0;
    int i = 0;
    int res =0;
    while (s1[z] != '\0')
    {
        z++;
    }
    for (i = 0; i < z; i++) 
    {
        if (s1[i] != s2[i])
        {
            int k = (int)s1[i];
            int j = (int)s2[i];
            res = (k) - (j);
            break;
        }
      
    }
    
    return res;
}
