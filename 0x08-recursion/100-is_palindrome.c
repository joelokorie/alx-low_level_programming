#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string being considered
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @x1: smallest iterator.
 * @x2: biggest iterator.
 * Return: .
 */
int comparator(char *s, int x1, int x2)
{
	if (*(s + x1) == *(s + x2))
	{
		if (x1 == x2 || x1 == x2 + 1)
			return (1);
		return (0 + comparator(s, x1 + 1, x2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
