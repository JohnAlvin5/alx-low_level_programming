#include "main.h"
#include <ctype.h>

/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (islower(c) || isalpha(c))
		return (1);
	return (0);
}
