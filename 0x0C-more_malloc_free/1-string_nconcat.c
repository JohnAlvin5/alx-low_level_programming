#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates n characters string s2 to s1
 * @s1 :First string
 * @s2 : second string
 * @n : Number of characters to concatenate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2 && j <= n; j++)
	{
		str[i] = s2[j];
		i++;
	}
/*	str[i] = '\0';*/

	return (str);

	free(str);
}
