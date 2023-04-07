#include "main.h"

/**
  * factorial - Calculate the factorial of a number
  * @n: This is the number for which we are to calculate the factorial
  *
  * Return: integer value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
