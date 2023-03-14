#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - writes the character c to stdout
 * @s1 : The character to print
 * @s2 : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	len1 = strlen(s1);
	len2 = strlen(s2);

	str = malloc(sizeof(char) * (len1 + len2 - 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j <= len2; j++)
	{
		str[i] = s2[j];
		i++;
	}

	return (str);

	free(str);
}
