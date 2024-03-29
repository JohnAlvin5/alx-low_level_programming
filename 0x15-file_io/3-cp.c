#include "main.h"

char *buffer_alloc(char *filename);
void close_file(int fp);

/**
 * buffer_alloc - Allocates memory space for buffer
 * @filename: Name of the file
 *
 * Return: Buffer allocated
 */

char *buffer_alloc(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file
 * @fp: File description file
 *
 * Return: void
 */

void close_file(int fp)
{
	int test;

	test = close(fp);
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = buffer_alloc(argv[2]);

	file_from = open(argv[1], O_RDONLY);
	read_count = read(file_from, buffer, 1024);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || read_count == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);

			free(buffer);
			exit(98);
		}

		write_count = write(file_to, buffer, read_count);
		if (file_to == -1 || write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

			free(buffer);
			exit(99);
		}

		read_count = read(file_from, buffer, 1024);

		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_count > 0);

	close_file(file_from);
	close_file(file_to);

	free(buffer);

	return (0);
}
