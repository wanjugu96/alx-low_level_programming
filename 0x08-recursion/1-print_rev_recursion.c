#include "holberton.h"
/**
 *_print_rev_recursion- reverses a string
 * @s - string to be reversed.
 * Return: Always 0.
 */
void _print_rev_recursion(char* s)
{
    if (*s == '\0')
    {
        return;
    }
    _print_rev_recursion(s + 1);
    _putchar(*s);
}
