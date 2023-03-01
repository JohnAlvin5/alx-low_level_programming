#include "main.h"
#include <string.h>

/**
 * _strncat - writes the character c to stdout
 * @dest : The character to print
 * @src : Second
 * @n : third
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char string[1000000];

	for (i = 0; i < n; i++)
	{
		string[i] = src[i];
	}

	strcat(dest, string);

	return (dest);
}
