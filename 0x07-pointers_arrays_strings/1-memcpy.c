#include "holberton.h"

/**
 * dest -This is pointer to the destination array where the content is to be copied
 * @src: his is pointer to the source of data to be copied,
 * @n: This is the number of bytes to be copied.
 *
 * Return: Returns a pointer to dest.
 */
char* _memcpy(char* dest, char* src, unsigned int n)
{
    unsigned int i = 0;
    
    for (i = 0; i < n; i++);
    {
        
       *(dest+i) = *(src+i);
    }

    return(dest);

}
