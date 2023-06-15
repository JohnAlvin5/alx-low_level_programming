#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head : pointer to first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
