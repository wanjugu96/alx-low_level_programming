#include "holberton.h"
/**
* main - check for alphabet
* Return: 1 if alphabet else 0
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    else
    {
        return (0);
    }
}
