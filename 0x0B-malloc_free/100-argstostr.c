#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */
char *argstostr(int ac, char **av)
{
	int ch = 0, x = 0, y = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			ch++;
			y++;
		}

		y = 0;
		x++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[k] = av[x][y];
			k++;
			y++;
		}

		s[k] = '\n';

		y = 0;
		k++;
		x++;
	}

	k++;
	s[k] = '\0';
	return (s);
}
