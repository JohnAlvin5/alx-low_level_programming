#include "main.h"
#include <stdlib.h>

/**
 * calloc - allocates memory for an array
 * @nmemb : number of elements
 * @size : size in bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *str;

	str = malloc(nmemb * size);

	if (str == NULL || nmemb == 0 || size == 0)
		return (NULL);

	return (str);
	free(str);

}
