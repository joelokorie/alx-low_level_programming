#include "main.h"

/**
 * _memset - Entry point
 * @s: a pointer to a destination
 * @b: a constant byte to be put into the pointed destination
 * @n: the number of bytes to be filled
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
