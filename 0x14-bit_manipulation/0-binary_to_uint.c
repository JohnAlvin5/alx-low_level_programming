#include "main.h"

/**
 * binary_to_uint - converts abinary number to unsigned int
 * @b : pointer to a string of 0 and 1
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, i, binary, base;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	x = atoi(b);
	base = 1;
	binary = 0;

	for (i = 0; x > 0; i++)
	{
		if (x & 1)
			binary += (1 * base);

		x = x / 10;
		base = base * 2;
	}

	return (binary);
}
