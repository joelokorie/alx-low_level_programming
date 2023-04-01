#include "main.h"

/**
 * reverse_array - function that reverses the contents of an array
 * @a: pointer to an array
 * @n: number of elements of an array
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int short_time, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		short_time = a[counter];
		a[counter++] = a[n];
		a[n--] = short_time;

	}

}
