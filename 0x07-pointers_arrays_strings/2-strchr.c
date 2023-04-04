#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point
 * @s: the input string
 * @c: the character to be searched for
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}
