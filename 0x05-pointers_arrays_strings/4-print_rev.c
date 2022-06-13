#include "main.h"
/**
 * print_rev - A function that prints a string in reverse.
 *
 * @s: a pointer points to s.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		while (i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
