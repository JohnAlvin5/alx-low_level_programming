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
