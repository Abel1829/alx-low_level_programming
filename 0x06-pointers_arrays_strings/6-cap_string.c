#include "main.h"
/**
 * *string_toupper - Afunction that changes lowercase letter of a string to uppercase.
 *
 * @a - the string that will be changed.
 *
 * Return: char.
 */
char *string_toupper(char *a)
{
        int i;

        for (i = 0; a[i]; i++)
        {
                while (!(a[i] >= 'a' && a[i] <= 'z'))
                {
			i++;
			if (a[i - 1] == ' ' ||
		       	    a[i - 1] == '\t' ||
		            a[i - 1] == '\n' ||
		            a[i - 1] == ',' ||
		            a[i - 1] == ';' ||
		            a[i - 1] == '.' ||
		            a[i - 1] == '!' ||
		            a[i - 1] == '?' ||
		            a[i - 1] == '"' ||
		            a[i - 1] == '(' ||
		            a[i - 1] == ')' ||
		            a[i - 1] == '{' ||
		            a[i - 1] == '}' ||
		            i == 0)
                            a[i] -= 32;
                }
        }
        return (a);
}

