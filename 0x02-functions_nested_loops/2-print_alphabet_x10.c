#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
/* print_alphabet() : 'Prints the aphabetical letters' */
void print_alphabet(void)
{
	int i, l;

	for (l = 0; l <= 10; l++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
