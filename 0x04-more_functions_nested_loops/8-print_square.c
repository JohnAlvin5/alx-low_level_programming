#include "main.h"

/**
 * print_square - writes the character c to stdout
 * @size: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
