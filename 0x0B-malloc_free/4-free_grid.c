#include "main.h"
#include <string.h>

/**
 * free_grid - writes the character c to stdout
 * @grid : The character to print
 * @height : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_grid(int **grid, int height)
{
