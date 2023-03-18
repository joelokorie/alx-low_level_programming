#include <stdio.h>

/**
 * main - A program to print the alphabets in lower case
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
