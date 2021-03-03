#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
    int **ar;
    int i = 0;
    int k = 0;
  
    if (width == 0 || height == 0)
    {
        return (NULL);
    }

    ar =(int**)malloc(sizeof(int*) * height);
  
    if (ar == NULL)
    {
        return (NULL);
    }
        for (k = 0; k < height; k++)
        {
            ar[k] =(int*) malloc(sizeof(int) * width);
          
            if (ar[k] == NULL)
            {
                return(NULL);
            }
            for (i = 0; i < width; i++)
            {
                ar[k][i] = 0;
            }
        }
        return (ar);
}
