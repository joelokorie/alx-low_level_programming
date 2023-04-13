#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - the function that concatenates
  * @s1: is the first string
  * @s2: is the second string
  * @n: is the number of bytes in string s2 that we want to concatenate
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, j = 0, y = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[y])
		y++;

	if (n >= y)
		l = x + y;
	else
		l = x + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	y = 0;
	while (j < l)
	{
		if (j <= x)
			str[j] = s1[j];

		if (j >= x)
		{
			str[j] = s2[y];
			y++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
