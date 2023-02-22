#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	while (n >= 10)
		n = n % 10;

	_putchar(n);

	return (n);
}
