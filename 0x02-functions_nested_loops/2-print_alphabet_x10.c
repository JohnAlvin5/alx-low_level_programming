#include "main.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i, l;

	for (l = 1; l <= 10; l++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
