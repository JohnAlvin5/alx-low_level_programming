#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head : pointer to first node
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
