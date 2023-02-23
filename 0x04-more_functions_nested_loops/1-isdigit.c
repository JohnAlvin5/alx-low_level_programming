#include "main.h"
#include <ctype.h>

/**
 * _isdigit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
