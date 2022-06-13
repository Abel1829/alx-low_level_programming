#include "main.h"
/**
 * _strlen - A function that returns the length of string.
 *
 * @s: a pointer taht points to char.
 *
 * Return: *s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
