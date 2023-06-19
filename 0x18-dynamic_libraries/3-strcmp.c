#include "main.h"
#include <string.h>

/**
 * _strcmp - writes the character c to stdout
 * @s1 : The character to print
 * @s2 : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = strcmp(s1, s2);

	return (j);
}
