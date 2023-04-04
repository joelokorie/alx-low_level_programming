#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: destination location in memory
 * @src: source location in memory
 * @n: the number of bytes to be copied
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
