#include "main.h"
/**
 * jack_bauer - A function that prints every minute of day of jack bauer.
 *
 * Return: no return.
 */
void jack_bauer(void)
{
	int i, j, k, n;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 52; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (n = 48; n <= 57; n++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(n);
					_putchar('\n');
				}
			}
		}
	}
}
