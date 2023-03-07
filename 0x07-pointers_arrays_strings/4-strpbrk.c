#include "main.h"
#include <string.h>

/**
 * _strpbrk - writes the character c to stdout
 * @s : The character to print
 * @accept : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);

	return (ptr);
}
