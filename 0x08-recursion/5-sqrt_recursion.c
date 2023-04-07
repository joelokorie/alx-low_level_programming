#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);

/**
  * _sqrt_recursion - A function that returns square root of a number
  * @n: The number whose square root we are calculating
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: the number whose square root we are calculating
  * @x: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (x);
	return (_sqrt(n, x + 1));
}
