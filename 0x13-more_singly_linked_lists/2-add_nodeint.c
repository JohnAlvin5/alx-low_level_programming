#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listsint_t list
 * @head : pointer to first node
 * @n : input value
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
