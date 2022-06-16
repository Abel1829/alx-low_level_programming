#include "main.h"
/**
 * *_strncat - A function that concatenates two string.
 * @dest: A destination string.
 * @src: A source string that will appended to the destination string.
 * @n: an integer value.
 * @Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
