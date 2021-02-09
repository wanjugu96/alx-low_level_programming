
#include "holberton.h"
#include < ctype.h >
/**
 * _islower-check lowercase
 * Return: what does the function return
 */
int _islower(int c) 
{
    int i;
    i = islower(c);
    if (i > 0)
    {
        return 1;
    }
    else
    {
        return(0);
    }
}
    
