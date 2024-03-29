#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name : name to be printed
 * @f : pointer to function that accepts a char without return
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
