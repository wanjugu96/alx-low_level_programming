#include "holberton.h"

/**
 * har* string_touppe- capitalize letters
 *@a string to capitalize
 * Return: a
 */
char* string_toupper(char*);
char* string_toupper(char* a)
{
    int z = 0;
    int i = 0;
    int j = 0;

    while (a[z]!= '\0')
    {
        z++;
    }
   
    for(i=0; i<z; i++)
    {
        if (a[i] == '\n' || a[i]==' ')
        {
            a[i] = a[i];
        }

        else if (a[i] >= 'a' && a[i] <= 'z')
        {
             j = a[i];
            j = j - 32;
            char s = j;

            a[i] = s;
        }
        
    }
    
    return a;
