#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table to add or update an elemment
 * @key: the key
 * @value: is the value associated with the key
 *
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *node;
	char *value_dup;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_dup;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(value_dup);
		return (0);
	}

	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
