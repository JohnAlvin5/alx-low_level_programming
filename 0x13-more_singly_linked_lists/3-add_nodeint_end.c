#include "lists.h"
 /**
  * add_nodeint_end - addds a new node at the end of a listint_t list
  * @head : pointer to first node
  * @n : input value
  *
  * Return: addressof the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return (new);
	free(new);
}
