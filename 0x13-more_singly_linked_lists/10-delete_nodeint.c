#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of list
 * @head : pointer to first node
 * @index : index of node to be deleted
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current, *next;
	unsigned int i;

	current = *head;
	if (!current)
		return (-1);

	if (index == 0)
	{
		next = current->next;
		free(*head);

		*head = next;

		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (!current)
				return (-1);
			current = current->next;
		}

		previous = current;
		current = current->next;
		next = current->next;
		free(current);

		previous->next = next;

		return (1);
	}
}
