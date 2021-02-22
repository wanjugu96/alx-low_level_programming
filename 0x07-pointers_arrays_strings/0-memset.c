#include "holberton.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: This is a pointer to the block of memory to fill.
 * @b:  This is the value to be set. 
 * @n: This is the number of bytes to be set to the value.
 * Return: Nothing.
 */
char* _memset(char* s, char b, unsigned int n)
{
    int i = 0;
    char** character;
    character = b;
    for (i = 0; i <n; i++)
    {
        *(s + i) = character;
    }
    return (s);
}
