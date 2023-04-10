#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one
 *	number to another
 * @n : first number
 * @m : second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, x, index;

	x = n ^ m;
	if (x == 0)
		return (0);

	index = 0;
	count = 0;

	while (index < (sizeof(x) * 8))
	{
		if ((x >> index) & 1)
			count += 1;

		index += 1;
	}

	return (count);
}
