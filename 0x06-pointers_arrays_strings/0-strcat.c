#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: (dest)
 *
 */

char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int i = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlength++;

	for (i = 0; src[i] != '\0'; i++)
		srclength++;

	for (i = 0; i <= srclength; i++)
		dest[destlength + 1] = src[i];

	return(dest);
}
