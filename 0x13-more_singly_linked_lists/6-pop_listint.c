#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head : pointer to first node
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *current, *next;

	if (!*head)
		return (0);

	current = *head;
	value = current->n;
	next = current->next;

	free(current);
	*head = next;

	return (value);
}
