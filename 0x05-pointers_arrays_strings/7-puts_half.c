//#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts_half(char* str)
{
    //str[] = *str;
    int z;
    char strr[] = { *str };
    int i = 0;
    int j = sizeof(strr);
    z =  j/ 2;
    //char z;
    //char[] = "";
    for (i = z; i <= j; i++)
    {
        str[i] = *(str + i);
        printf("%c", str[i]);
        
    }
}
int main(void)
{
    char* str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
