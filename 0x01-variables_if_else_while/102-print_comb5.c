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

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			for (k = '0'; k <= '9'; k++)
			{
				for (n = '0'; n <= '9'; n++)
				{
					putchar(k);
					putchar(n);
					if (k != '9' || n != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
