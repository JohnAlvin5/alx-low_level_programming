#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *	to get from one number to another.
 * @n: First digit
 * @m: Second digit
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_or = n ^ m;
	unsigned int count = 0;

	while (x_or)
	{
		count += (x_or & 1);
		x_or >>= 1;
	}

	return (count);
}
