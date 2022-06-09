include "main.h"
/**
 * main - A function that checks for uppercase character.
 *
 * @c: used us an integer.
 *
 * Return: 1 if it is uppercase otherwise 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
