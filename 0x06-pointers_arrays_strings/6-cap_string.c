#include "main.h"
#include <ctype.h>

/**
 * string_toupper - writes the character c to stdout
 * @c : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = toupper(c[i]);
		}
	}

	return (c);

}
