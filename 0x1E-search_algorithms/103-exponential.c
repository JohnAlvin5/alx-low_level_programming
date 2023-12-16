#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *	exponential search algorithm
 * @array: pointer to first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: index of the value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right, center, bnd = 1;

	if (array == NULL)
		return (-1);

	right = (bnd < size - 1) ? bnd : size - 1;

	while (bnd < size && array[bnd] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bnd, array[bnd]);

		left = bnd;
		bnd *= 2;
		right = (bnd < size - 1) ? bnd : size - 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (left <= right)
	{
		center = left + (right - left) / 2;
		printf("Searching in array: %d", array[left]);

		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[center] == value)
			return ((int)center);
		if (array[center] < value)
			left = center + 1;
		else
			right = center - 1;
	}
	return (-1);
}
