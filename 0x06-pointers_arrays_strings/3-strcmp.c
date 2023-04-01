#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input value
 * @s2: input value
 *
 * Return: (0) when both values are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, comparator;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	comparator = s1[i] - s2[i];

	return (comparator);
}
