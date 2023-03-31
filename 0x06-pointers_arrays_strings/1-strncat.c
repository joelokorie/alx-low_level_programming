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
	int j;
	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
