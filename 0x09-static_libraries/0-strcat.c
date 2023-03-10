#include "main.h"
#include <string.h>

/**
 * _strcat - writes the character c to stdout
 * @dest : The character to print
 * @src : Second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
