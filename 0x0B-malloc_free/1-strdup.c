#include "main.h"
#include <stdlib.h>

/**
  * _strdup - A function that duplicate a string
  * @str: the string to be duplicated
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int length = 1;
	int x = 0;

	char *s;

	if (str == NULL)
		return (NULL);

	while (str[length])
	{
		length++;
	}

	s = malloc((sizeof(char) * length) + 1);

	if (s == NULL)
		return (NULL);

	while (x < length)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
