#include "main.h"
#include <string.h>

/**
 * _strncpy - writes the character c to stdout
 * @dest : The character to print
 * @src : Second
 * @n : third
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	char string[1000000];

	for (j = 0; j < n; j++)
	{
		string[j] = src[j];
	}

	strcpy(dest, string);

	return (dest);
}
