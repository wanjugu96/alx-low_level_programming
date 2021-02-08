#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
    char alpha = 'a';
    for (alpha= 'a'; alpha <= 'z'; alpha++)
        _putchar(alpha);

    _putchar('\n');

}
int main(void)
{
    print_alphabet();
    return (0);
}
