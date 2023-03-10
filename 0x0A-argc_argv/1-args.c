#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguements
 * @argc : returns number of arguements
 * @argv : array of arguements
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
