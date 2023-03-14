#include "main.h"
#include <stdlib.h>

/**
 * argstostr - writes the character c to stdout
 * @ac : The character to print
 * @av : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char **str;

	str = malloc(sizeof(av) * ac);

	if (ac == 0 || av == 0 || str == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{
		str[i] = av[i];
	}
	str[i] = '\0';

	return (*str);
	free(str);
}
