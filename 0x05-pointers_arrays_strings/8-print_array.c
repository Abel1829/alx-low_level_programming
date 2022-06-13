#include "main.h"
/**
 * print_array - A function that prints n elements of an array.
 * @a: A pointer that points to an integer.
 * @n: An integer value.
 * Return: void.
 */
void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", *(a+i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
