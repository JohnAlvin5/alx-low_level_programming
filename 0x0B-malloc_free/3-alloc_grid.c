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
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid =(int **) malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = (int *)malloc(sizeof(int) * width);
		if (grid == NULL)
		{
			for (x = 0; x < y; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}

	return(grid);
}
