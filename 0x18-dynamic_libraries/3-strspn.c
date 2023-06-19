#include "main.h"
#include <string.h>

/**
 * _strspn - writes the character c to stdout
 * @s : The character to print
 * @accept : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p;

	p = strspn(s, accept);

	return (p);
}
