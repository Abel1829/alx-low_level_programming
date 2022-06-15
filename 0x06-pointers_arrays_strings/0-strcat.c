#include "main.h"
/**
 * *_strcat - A function that concatenates two string.
 * @dest: A destination string to concatenate.
 * @src: A source string that's appended to the destination string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;

	for (int i = 0; dest[i] != '\0'; i++)
	{
		dest[j] = dest[i];
		j++;
	}
	for (int i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
