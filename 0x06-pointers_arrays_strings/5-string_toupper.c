#include "main.h"
/**
 * string_toupper - a function that transforms lowercase to uppercase
 * @string: pointer to string
 *
 * Return: pointer to uppercase string
 */

char *string_toupper(char *string)
{
	int string_length = 0;

	while (string[string_length] != '\0')
	{
		if (string[string_length] >= 97 && string[string_length] <= 122)
		{
			string[string_length] = string[string_length] - 32;
		}
		string_length++;
	}
	return (string);
}
