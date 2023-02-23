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

	for (j = 1; j <= size; j++)
	{
		for (k = 1; k <= size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
