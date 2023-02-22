#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			break;
		printf(", ");
	}
}

