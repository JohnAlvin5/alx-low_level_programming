#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *	on each element of an array
 * @array : the array with the elements
 * @size : size of the array
 * @action : pointer to the function to be used
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (!array || !size || !action)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
