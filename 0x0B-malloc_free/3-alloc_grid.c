#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - writes the character c to stdout
 * @width : The character to print
 * @height : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
