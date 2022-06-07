#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character.
 *
 * @c: The character in ASCII code.
 *
 * Return: 1 if it is lowe or uppercase. 0 for the rest.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
