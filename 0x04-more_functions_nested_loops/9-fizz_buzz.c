#include "main.h"
#include <stdio.h>

/**
 * main - writes the character c to stdout
 * The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("Fizz ");

		else if ((n % 5) == 0)
			printf("Buzz ");

		else if (((n % 3) == 0) && ((n % 5) == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	}
	return (0);
}

