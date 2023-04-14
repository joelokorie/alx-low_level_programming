#include "main.h"
#include <stdlib.h>

/**
  * array_range - ...
  * @min: minimum range
  * @max: maximum range
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *a, x = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[x] = min;
		x++;
		min++;
	}

	return (a);
}
