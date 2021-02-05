#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - print alphabet in reverse
* Return: 0
*/
int main(void)
{
char *ch = "abcdefghijklmnopqrstuvwxyz";
int i = 25;

for (i = 25; i>=0; i--)
{
putchar(ch[i]);
}
putchar('\n');
return (0);
}
