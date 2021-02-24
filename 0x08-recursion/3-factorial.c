#include "holberton.h"
/**
 * factorial - calculatge factorial of a number
 * @n -int to get factorial for
 * Return: returns the factorial of a given number.
 */
int factorial(int n)
{
    if (n == 0) 
        return (1);
  
   if (n < 0)
        return (-1);
        
        return (factorial(n - 1) * n);
}
