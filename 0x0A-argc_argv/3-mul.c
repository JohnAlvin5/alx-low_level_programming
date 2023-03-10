#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc : returns number of arguements
 * @argv : array of arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int muxp, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	muxp = n1 * n2;

	printf("%d\n", muxp);

	return (0);
}
