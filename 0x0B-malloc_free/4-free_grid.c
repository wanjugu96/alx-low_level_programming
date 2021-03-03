#include "holberton.h"
/**
 * free_grid - frees memory created for a grid 
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
  int i;
  
  if(grid == NULL || height<=0)
  {
    for(i = 0; i < height; i++)
      free grid[i];
    free (grid);
  }
}
