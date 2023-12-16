#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump
 *	search algorythm
 * @array: pointer to first element
 * @size: number of elements
 * @value: value to search for
 *
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, jump;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	right = right < size - 1 ? right : size - 1;

	for (; left < right && array[left] < value; left++)
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);

	if (array[left] == value)
		return ((int)left);
	return (-1);
}
