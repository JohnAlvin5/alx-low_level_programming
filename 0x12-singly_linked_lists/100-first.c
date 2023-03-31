#include "lists.h"

void __attribute__((constructor)) first();

/**
 * first - Prints a string before the main function is executed
 *
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
