#include "main.h"

/**
 * binary_to_uint - COnverts abinary number to an usigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}

	i = 0;
	while (b[i] != '\0')
	{
		num <<= 1;

		if (b[i] == '1')
			num += 1;

		i++;
	}

	return (num);
}
