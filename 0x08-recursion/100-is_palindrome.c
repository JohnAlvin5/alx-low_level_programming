#include "main.h"

/**
 * get_length - writes the character c to stdout
 * @s : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - writes the character c to stdout
 * @s : The character to print
 * @start : second
 * @end : third
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (0);
}

/**
 * is_palindrome - writes the character c to stdout
 * @s : The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int len = get_length(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, len - 1));
}
