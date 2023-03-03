#include "main.h"
#include <ctype.h>

/**
 * cap_string - writes the character c to stdout
 * @c : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = toupper(c[i]);
			continue;
		}
		if (c[i] == ' ' || c[i] == '\n' || c[i] == '-'
				|| c[i] == '\t' || c[i] == '.' || c[i] == '"')
		{
			if (c[i] == '\t')
				c[i] = ' ';

			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = toupper(c[i]);
			}
		}
	}

	return (c);
}
