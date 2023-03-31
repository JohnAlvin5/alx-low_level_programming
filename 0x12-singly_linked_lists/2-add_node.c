#include "lists.h"

/**
 * add_node - addds a new node at the beginning of a list_t list
 * @head : points to thr first node
 * @str : string to be duplicated
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);

	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return(new);
}
