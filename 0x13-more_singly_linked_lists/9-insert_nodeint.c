#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node aat a given position
 * @head : pointer to first node
 * @idx : index of insertion to the list
 * @n : input value
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
