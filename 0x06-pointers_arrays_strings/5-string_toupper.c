#include "main.h"
/**
 * *string_toupper - Afunction that changes lowercase letter of a string to uppercase.
 *
 * @a - the string that will be changed.
 *
 * Return: char.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
