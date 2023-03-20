#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs from memory
 * @d : address to dog to be freed
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
