#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: an input to the function
 * @size: an input to the function
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x, n, add1 = 0, add2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		add1 = add1 + a[x];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	add2 = add2 + a[n];
	printf("%d, %d\n", add1, add2);
}
