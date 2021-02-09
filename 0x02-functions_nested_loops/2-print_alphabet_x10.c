#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i=0;
for (i = 0; i <= 9; i++)
{ 
char alpha = 'a';
_putchar(alpha);
_putchar('\n');
}
}
int main(void)
{
print_alphabet_x10();
}
