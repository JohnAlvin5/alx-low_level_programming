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
	listint_t *node, *next;

	node = *head;
	value = node->n;
	next = node->next;

	free(node);
	*head = next;

	return (value);
}
