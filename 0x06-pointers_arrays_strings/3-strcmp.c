#include "main.h"
/**
 * _strcmp - A function that compares two string.
 * @s1: String 1.
 * @s2: String 2.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if ((*s1 == '\0' && *s2 != '\0')
			|| (*s1 != '\0' && *s2 == '\0')
			|| (*s1 != *s2)
		{
			break;
		}
		return (*s1 - *s2);
	}
}
