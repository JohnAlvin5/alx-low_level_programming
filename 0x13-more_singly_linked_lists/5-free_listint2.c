#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets head to NULL
 * @head : pointer to first node
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!*head)
		return;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
