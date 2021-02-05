#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Description: Function will print all single digit numbers in a comma
 *separated list without the use of any char variables.
 *Return: 0 upon successful completion
 */
int main(void)
{
int num = '0';
int num1 = '0';
for (int num ='0'; num <='9'; num++)
{		
for (int num1 = '0'; num1 <= '9'; num1++)
{
putchar(num);
putchar(num1); 
if (num1 != '9' ||  num !='9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
