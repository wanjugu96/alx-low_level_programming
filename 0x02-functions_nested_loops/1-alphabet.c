#include "holberton.h"
/**
* print_alphabet - Prints out lowercase alphabet followed by a new line
* Return: Returns null
*/
void print_alphabet(void)
{
char alpha = 'a';

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
 _putchar(alpha);
}
_putchar('\n');
return (0);
}
