#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - is the function that creates the array
  * @width: is the width of the array
  * @height: is the height of the array
  *
  * Return: ...
  */

int **alloc_grid(int width, int height)
{
	int x, y, z, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(a[y]);
			}

			free(a);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (l = 0; l < width; l++)
		{
			a[z][l] = 0;
		}
	}

	return (a);
}
