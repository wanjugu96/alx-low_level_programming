#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
* main - print alphabet
* Return: 0
*/
int main(void)
{
char *ch = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

for (i = 0; i <= 25; i++)
{
if (ch[i] != 'q' && ch[i] != 'e')
{
putchar(ch[i]);
}
}
putchar('\n');
return (0);
}
