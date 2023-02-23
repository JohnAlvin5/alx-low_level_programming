#include "main.h"
#include <ctype.h>

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
