#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int _abs(int n)
{
	if (n < 0)
		n = n*-1;
	else 
		n = n;
	_putchar(n);
	
	return (0);
}
