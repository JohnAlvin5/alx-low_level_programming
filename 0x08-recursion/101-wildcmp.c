#include "main.h"

/**
 * check_match - writes the character c to stdout
 * @s1 : The character to print
 * @s2 : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int check_match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (check_match(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (check_match(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && check_match(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - writes the character c to stdout
 * @s1 : The character to print
 * @s2 : second
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *s1, char *s2)
{
	return (check_match(s1, s2));
}
