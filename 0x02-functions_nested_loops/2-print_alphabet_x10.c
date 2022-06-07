#include "main.h"
/**
 * print_alphabet_x10 - That prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
