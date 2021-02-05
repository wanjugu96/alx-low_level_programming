#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numbers using putchar
 * Return: 0
 */
int main(void)
{
int i = 0;
	
char *nums = "0123456789";
for (i = 0; i < 10; i++)
{
putchar(nums[i]);
}
putchar('\n');
return (0);
}
