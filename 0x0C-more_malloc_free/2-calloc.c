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
/*	unsigned int i;*/

	unsigned int *str;

	str = (unsigned int *)malloc(nmemb * size);

	if (str == NULL || nmemb == 0 || size == 0)
		return (NULL);

/**	for (i = 0; i < nmemb; i++)
 *	{
 *		str[i] = 0;
 *	}
 */
	return (str);
	free(str);

}
