#include "main.h"
#include <string.h>

/**
 * puts_half - writes the character c to stdout
 * @str : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int length, i, j;

	length = strlen(str);

	if ((length % 2) != 0)
		j = (length + 1) / 2;
	else
		j = length /  2;

	for (i = j; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
