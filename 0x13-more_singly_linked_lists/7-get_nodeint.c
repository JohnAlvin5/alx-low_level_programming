#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head : pointer to first node
 * @index : index of nth node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0)
		return (head);
	else
	{
		for (i = 0; i < index; i++)
			head = head->next;

		if (!head)
			return (NULL);
		else
			return (head);
	}
}
