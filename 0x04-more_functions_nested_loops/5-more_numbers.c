#include "main.h"
/**
 * more_numbers - A funtion prints 10 times the number from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	char a, b;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + a);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
