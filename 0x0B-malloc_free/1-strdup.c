#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - writes the character c to stdout
 * @str : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *str2;

	if (str = NULL)
		return (NULL);

	len = strlen(str) + 1;

	str2 = malloc(sizeof(char) * len);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
	free(str2);
}
