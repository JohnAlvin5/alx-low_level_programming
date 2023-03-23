#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator : character to be printed between the strings
 * @n : constant integer
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	va_list as;
	unsigned int i;

	va_start(ap, n);
	va_start(as, n);

	for (i = 0; i < n; i++)
	{
		if (!va_arg(as, char*))
		{
			printf("(nil)");
			continue;
		}

		printf("%s", va_arg(ap, char*));

		if (i == (n - 1))
			break;

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
	va_end(as);
}
