#include "holberton.h"
/**
 * isdigit - check if digit
 * @int c-character to be compared 
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
