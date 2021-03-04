#include <stdlib.h>
#include <limits.h>

/**
 *  malloc_checked - callocates memory using malloc
 * @b -memory to be allocated
 * Return:  pointer to the allocated memory
 */

void* malloc_checked(unsigned int b)
{
    int* ar;
    ar = malloc(b);

    if (ar == NULL)
    {
        exit (98);
    }
    return (ar);
}
