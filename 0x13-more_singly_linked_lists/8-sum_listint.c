#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of a list
 * @head : pointer to the first node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;

		head = head->next;
	}
	return (sum);
}
