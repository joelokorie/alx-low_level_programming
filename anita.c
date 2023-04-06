#include <stdio.h>

/**
 * main - a program to learn about looping;
 * Return: 0 (success);
 *
 */

int main(void)
{
	int i = 0, j;

	while (i <= 5)
	{
		j = 0;
		while (j <=5)
		{

			printf("2  ");
			j++;
		}
		printf("\n");
		printf("3  ");
		i++;
	}
	
	printf("\n");
	return (0);
}
