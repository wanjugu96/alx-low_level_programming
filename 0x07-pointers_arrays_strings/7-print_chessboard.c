#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a -array
 * Return: Always 0.
 */
void print_chessboard(char(*a)[8])
{
    int i;
    int j;
    char s;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            s = a[i][j];
            _putchar(s);
        }
       _putchar('\n');
    }

}
