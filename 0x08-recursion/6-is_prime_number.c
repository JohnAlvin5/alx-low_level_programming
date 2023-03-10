#include "main.h"

/**
 * is_divisible - writes the character c to stdout
 * @n : The character to print
 * @div : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_divisible(int n, int div)
{
	if (div == 1 || div == n)
	{
		return (0);
	}
	if (n % div == 0)
	{
		return (1);
	}
	return (is_divisible(n, div - 1));
}

/**
 * is_prime_number - writes the character c to stdout
 * @n : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n ==  2)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));
}
