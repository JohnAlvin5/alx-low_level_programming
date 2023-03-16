#include "main.h"
#include <stdlib.h>

/**
 * array_range - writes the character c to stdout
 * @min : The character to print
 * @max : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 2;

	arr = (int *)malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}
	arr[i] = '\0';

	return (arr);
	free(arr);
}
