#include "main.h"
/**
 * puts_half - A function that prints half of a string.
 *
 * @str: A pointer that points to char.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
