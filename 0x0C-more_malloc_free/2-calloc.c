#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, l = 0;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	t = malloc(l);

	if (t == NULL)
		return (NULL);

	while (x < l)
	{
		t[x] = 0;
		x++;
	}

	return (t);
}
