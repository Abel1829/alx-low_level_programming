#include "main.h"
#include <string.h>
/**
 * rev_string - A function that returns a string.
 *
 * @s: a pointer points to char.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, tmp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
