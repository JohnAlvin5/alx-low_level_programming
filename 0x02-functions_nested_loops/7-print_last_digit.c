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
	int cnt;
	int dig;
	cnt = 0;
	n = int j;

	while (j >= 10)
	{
		j = j % 10;
		cnt = cnt + 1;
	}

	dig = n % (10 * cnt);

	_putchar(dig);
	_putchar(dig);

	return (dig);
}
