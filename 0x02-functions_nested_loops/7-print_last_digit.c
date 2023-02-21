#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int print_last_digit(int n)
{
	while (n >= 10)
		n = n % 10;

	_putchar(n);

	return (0);
}
