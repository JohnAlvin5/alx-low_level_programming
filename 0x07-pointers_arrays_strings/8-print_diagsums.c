#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - writes the character c to stdout
 * @a : The character to print
 * @size : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;
	int diag1[50];
	int diag2[50];

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1[i] = a[i][j];
				sum1 = sum1 + a[i][j];
			}
			else if (j == (size - i))
			{
				diag2[i] = a[i][j];
				sum2 = sum2 + a[i][j];
			}
			else
				continue;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
