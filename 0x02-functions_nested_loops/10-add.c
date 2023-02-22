#include "main.h"

/**
 * add - writes the character c to stdout
 * @m:The character to print
 * @n: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int m, int n)
{
	int i;

	i = m + n;
	_putchar(i);
	return (i);
}
