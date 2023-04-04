#include "main.h"

/**
 * _strspn - Entry point
 * @s: the source string
 * @accept: the accepted prefix
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, n, counter, check;

	counter = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[x])
			{
				counter++;
				check = 1;
			}
		}

		if (check == 0)
			return (counter);
	}

	return (counter);
}
