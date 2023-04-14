#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - ...
  * @ptr: pointer to the old allocated memory.
  * @old_size: size of the old memory
  * @new_size: size of the new memory
  *
  * Return: ...
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		new_ptr[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (new_ptr);
}
