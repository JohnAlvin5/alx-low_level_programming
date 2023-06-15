#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h : pointer to the first node
 * @idx : index of the list for insertion starting from 0
 * @n : value of element n
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *next;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	current = *h;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (!current)
		{
			return (NULL);
			free(new);
		}
		current = current->next;
	}
	next = current->next;

	current->next = new;
	new->next = next;

	return (new);
	free(new);
}
