#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (((k + n) > (i + j) && k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(n);

						if (i + j + k + n == 227 && i == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
