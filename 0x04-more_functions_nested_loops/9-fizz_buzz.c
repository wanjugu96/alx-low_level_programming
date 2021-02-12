#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void fizz_buzz(void)
{
    int i = 0;
    for (i = 1; i <= 100; i++)
    {
        if ((i % 5 == 0 && i % 3 == 0) && (i % 5 == 0 || i % 3 == 0))
        {
            printf("FizzBuzz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    
}
