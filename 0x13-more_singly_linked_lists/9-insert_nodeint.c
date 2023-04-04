#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node aat a given position
 * @head : pointer to first node
 * @idx : index of insertion to the list
 * @n : input value
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current, *next;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	current = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
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
