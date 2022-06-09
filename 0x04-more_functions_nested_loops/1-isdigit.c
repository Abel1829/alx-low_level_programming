#include "main.h"
/**
 * _isdigit - A function that checks the integer is digit.
 *
 * @c: Used as an integer.
 *
 * Return: 1 if it is digit else 0.
 */
int _isdigit(int c)
{
	if (c > 43 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
}
