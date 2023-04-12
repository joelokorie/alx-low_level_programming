#include "main.h"
#include <stdlib.h>

/**
  * free_grid - the function to free the grid
  * @grid: the dimensional array to be freed
  * @height: height of the grid
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
