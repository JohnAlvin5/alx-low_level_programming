#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		_putchar(1);
	} else _putchar(0);

	return (0);
}
