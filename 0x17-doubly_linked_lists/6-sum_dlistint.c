#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a linked list
 * @head : pointer to first node
 *
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
