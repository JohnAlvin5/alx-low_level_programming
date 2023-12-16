#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of integers using the
 *	jump search algorithm
 * @list: pointer to head of list
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index = 0, i = 0, x;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	x = (size_t)sqrt((double)size);

	do {
		prev = list;
		i++;
		index = i * x;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
