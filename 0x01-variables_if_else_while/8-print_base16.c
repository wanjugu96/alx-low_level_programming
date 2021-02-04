#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
    char *ch = "0123456789abcdef";
    int i = 0;

    for (i = 0; i <= 26; i++)
    {
      putchar(ch[i]);
    }
    return (0);
}
