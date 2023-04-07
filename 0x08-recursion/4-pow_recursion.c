#include "main.h"

/**
  * _pow_recursion - Returns the value of x raised to the power of y
  * @x: the value of the number that is to be raise to a power
  * @y: the power to which the base is raised
  *
  * Return: the value multiplied y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
