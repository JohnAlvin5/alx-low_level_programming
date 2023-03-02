#include "main.h"

/**
 * reverse_array - writes the character c to stdout
 * @a : The character to print
 * @n : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	
	for(i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

	for(i = 4; i < n; i++)
		_putchar(a[i]);
}
