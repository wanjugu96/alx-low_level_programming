#include "holberton.h"
/**
*  _isupper - check for uppercase letters
* @ int c- character to check if upper
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
