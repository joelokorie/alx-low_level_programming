#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: the number of characters to be concatenated
 * Return: (dest)
 *
 */

char *_strncat(char *dest, char *src, int n)
{

	int destlength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlength++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlength + i] = src[i];

	return (dest);
}
