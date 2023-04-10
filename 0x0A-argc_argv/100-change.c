#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array vecotr containing the values passed into the programs.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int amountInCents, numberOfCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amountInCents = atoi(argv[1]);

	while (amountInCents > 0)
	{
		numberOfCoins++;
		if ((amountInCents - 25) >= 0)
		{
			amountInCents -= 25;
			continue;
		}
		if ((amountInCents - 10) >= 0)
		{
			amountInCents -= 10;
			continue;
		}
		if ((amountInCents - 5) >= 0)
		{
			amountInCents -= 5;
			continue;
		}
		if ((amountInCents - 2) >= 0)
		{
			amountInCents -= 2;
			continue;
		}
		amountInCents--;
	}

	printf("%d\n", numberOfCoins);

	return (0);
}

