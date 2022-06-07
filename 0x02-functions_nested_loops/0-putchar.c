include <unistd.h>
include <main.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
