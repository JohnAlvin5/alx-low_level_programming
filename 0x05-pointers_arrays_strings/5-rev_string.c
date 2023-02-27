#include "main.h"

/**
 * rev_string - writes the character c to stdout
 * @s : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char string[20000];

	while (s[i] != '\0')
	{
		string[i] = s[i];
		i++;
	}

	i = i - 1;

	while (i >= 0)
	{
		s[j] = string[i];
		i--;
		j++;
	}
}
