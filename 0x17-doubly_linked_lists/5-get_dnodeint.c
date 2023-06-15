#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head : pointer to first node
 * @index : index of the node starting from 0
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
