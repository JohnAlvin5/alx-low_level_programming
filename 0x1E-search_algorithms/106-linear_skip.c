#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to head of skip list
 * @value: value to search in
 *
 * Return: index of value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp;

	if (list == NULL)
		return (NULL);

	temp = list;

	do {
		list = temp;
		temp = temp->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)temp->index, temp->n);
	} while (temp->express && temp->n < value);

	if (temp->express == NULL)
	{
		list = temp;
		while (temp->next)
			temp = temp->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)temp->index);

	while (list != temp->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
