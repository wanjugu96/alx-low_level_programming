#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 *@s - string to be checked for character
 *@c - character being checked.
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char* _strchr(char* s, char c)
{
    int z=0;
    int i;
    while (s[z] != '\0')
    {
        z++;
    }
   
    for (i = 0; i < z; i++)
    {
        
        if (s[i] == c)
        {
            return (s+i);
            
        } 
        
    }
}
