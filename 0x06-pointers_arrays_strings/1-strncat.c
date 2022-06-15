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
	int j = 0;

	for (int i = 0; dest[i] != '\0'; i++)
	{
		dest[j] = dest[i];
		j++;
	}
	for (int i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
