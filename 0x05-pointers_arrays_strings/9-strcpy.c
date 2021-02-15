#include "holberton.h"
char* _strcpy(char* dest, char* src)
{
    int i = 0;
    int j = sizeof src;
    char *z;
    char* strn = { "" };
    z = &strn;


    for (i = 2; i <= 99 ; i++)
    {
        dest[i] = *(src + i);
        strn = strn + dest[i];
    }

    *dest = &strn;

    return dest;
}
