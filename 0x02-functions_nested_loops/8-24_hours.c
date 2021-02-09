#include <stdio.h>
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
	int num2 = '0';
	int num3 = '0';
	for ( num3 = '0'; num3 <= '9'; num3++)
	{
		for ( num2 = '0'; num2 <= '9'; num2++)
		{
			//for (int num3 = '0'; num3 <= '9'; num3++)
			//{

			for ( num = '0'; num <= '5'; num++)
			{
				for (num1 = '0'; num1 <= '9'; num1++)
				{
					if ((num2 <= '3') && (num3 <= '2'))
						{

							putchar(num3);
							putchar(num2);
							putchar(':');
							putchar(num);
							putchar(num1);
							putchar('\n');
							//break;
						}
					
					
				}
			}
			//}
		}
	}
	putchar('\n');
	return (0);
}
