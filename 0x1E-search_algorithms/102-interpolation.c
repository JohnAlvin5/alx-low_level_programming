#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array using
 *	interpolation search algorithm
 * @array: pointer to first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, posit;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		posit = left + (((double)(right - left) / (array[right] - 
					array[left])) * (value - array[left]));

		if (posit < size)
			printf("Value checked array[%lu] = [%d]\n", posit, array[posit]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", posit);
			break;
		}

		if (array[posit] == value)
			return ((int)posit);
		if (array[posit] < value)
			left = posit + 1;
		else
			right = posit - 1;
	}
	return (-1);
}
