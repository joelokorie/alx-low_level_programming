#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int x;
	unsigned int h, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			e = argv[x];

			for (h = 0; h < strlen(e); h++)
			{
				if (e[h] < 48 || e[h] > 57)
				{
					printf("Error\n");
					return (x);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
