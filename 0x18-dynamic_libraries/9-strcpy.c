#include "main.h"
#include <string.h>

/**
 * *_strcpy - writes the character c to stdout
 * @dest : The character to print
 * @src : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}



