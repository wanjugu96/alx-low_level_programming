#include "holberton.h"
#include <stdio.h>

/**
 * _abs - gives absolute number
 *
 * Return: absolute val
 */
int _abs(int);
int _abs(int  x)
{
    if (x < 0)
    {
        return x*(-1);
    }
    return x;
}
