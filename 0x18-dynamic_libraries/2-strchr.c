#include "main.h"
#include <string.h>

/**
 * _strchr - writes the character c to stdout
 * @s : The character to print
 * @c : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);

	return (p);
}
