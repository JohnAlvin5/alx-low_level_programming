#include "main.h"

/**
 * puts2 - writes the character c to stdout
 * @str : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) != 0)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
