#include "main.h"

/**
 * _abs - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	else
		n = n;
	_putchar(n);

	return (0);
}
