#include "main.h"

/**
 * times_table - writes the character c to stdout
 * The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int 1, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			_putchar(m);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
