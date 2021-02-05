#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - print hexadecimal
 * Return: 0
 */
int main(void)
{
char *ch = "0123456789abcdef";
int i = 0;
for (i = 0; i <= sizeof("0123456789abcdef"); i++)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
