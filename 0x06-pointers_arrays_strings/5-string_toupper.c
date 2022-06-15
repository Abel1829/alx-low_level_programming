#include "main.h"
/**
 * *string_toupper - Afunction that changes lowercase letter of a string to uppercase.
 *
 * @a - the string that will be changed.
 *
 * Return: char.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return (a);
}
