//#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    for (int i=0; i<=9; i++)
    { 
        char alpha = 'a';
        for (alpha = 'a'; alpha <= 'z'; alpha++)
            putchar(alpha);
        putchar('\n');
    }
   

}
int main(void)
{
    print_alphabet_x10();
    return (0);
}
