#include "main.h"
#include <string.h>

/**
 * _strstr - writes the character c to stdout
 * @haystack : The character to print
 * @needle : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);

	return (ptr);
}
