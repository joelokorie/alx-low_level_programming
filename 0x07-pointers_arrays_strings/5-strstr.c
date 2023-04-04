#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *here = haystack;
		char *there = needle;

		while (*here == *there && *there != '\0')
		{
			here++;
			there++;
		}

		if (*there == '\0')
			return (haystack);
	}

	return (NULL);
}
