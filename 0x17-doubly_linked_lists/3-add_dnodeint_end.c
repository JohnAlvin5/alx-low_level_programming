#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head : pointer to the first node
 * @n : value of the element n
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail_node;

	tail_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (tail_node->next != NULL)
		tail_node = tail_node->next;

	tail_node->next = new_node;
	new_node->prev = tail_node;

	return (new_node);
}
