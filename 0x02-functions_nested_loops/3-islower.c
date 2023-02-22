#include "main.h"
#include <ctype.h>

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	char ch[2] = {1, 0};
	
	if (islower(c))
	{
		_putchar(ch[1]);
	} else
		_putchar(ch[2]);

	return (0);
}
