#include "main.h"
#include <ctype.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (islower(c))
	{
		_putchar(1);
	} else
		_putchar(0);

	return (0);
}
