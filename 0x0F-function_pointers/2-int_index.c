#include "function_pointers.h"

/**
 * int_index - searches for an integer, returns index of first element
 *	for which cmp does not return 0
 * @array : the array of integers
 * @size : number of elements in the array
 * @cmp : pointer to function that compares values
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if(size <= 0)
		return (-1);

	for (x = 0; x <= size; x++)
	{
		if (cmp(array[x]) != 0)
			break;

		if (x == size)
			return (-1);
	}

	return (x);
}

