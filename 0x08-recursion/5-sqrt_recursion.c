#include "main.h"

/**
 * _sqrt - writes the character c to stdout
 * @n : The character to print
 * @x : Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt(int n, int x)
{
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recusion - writes the character c to stdout
 * @n : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, x));
}
