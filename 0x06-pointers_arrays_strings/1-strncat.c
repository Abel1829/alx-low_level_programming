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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
