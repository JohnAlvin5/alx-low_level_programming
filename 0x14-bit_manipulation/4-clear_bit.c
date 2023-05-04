#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to number
 * @index: The index
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	x = ~(1 << index);

	*n &= x;

	return (1);
}
