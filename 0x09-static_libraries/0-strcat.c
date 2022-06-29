#include "main.h"
/**
 * *_strcat - A function that concatenates two string.
 * @dest: A destination string to concatenate.
 * @src: A source string that's appended to the destination string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
