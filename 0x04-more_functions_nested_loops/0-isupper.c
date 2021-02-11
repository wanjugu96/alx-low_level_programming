#include "holberton.h"
/**
 * main - check for uppercase letters
 *
 * Return: Always 1 if c is uppercase and 0 is lower.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
