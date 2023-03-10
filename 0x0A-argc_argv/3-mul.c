#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc : returns number of arguements
 * @argv : array of arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int muxp;

	muxp = argv[1] * argv[2];

	printf("%s\n", argv[0]);

	return (0);
}
