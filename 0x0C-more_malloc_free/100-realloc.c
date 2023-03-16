#include "main.h"
#include <stdlib.h>

/**
 * realloc - writes the character c to stdout
 * @ptr : Pointer to previously allocated memory
 * @old_size : allocated size for ptr
 * @new_size : size of new memory block
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	int *new;
	
	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	if (new_size == old_size)
	{
		free(new);
		return (ptr);
	}

	if (ptr == NULL)
		return (new);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i <= new_size; i++)
	{
		new[i] = *((int *)(ptr) + i);
	}

	return (new);
	free(ptr);
	free(new);
}
