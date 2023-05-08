#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp, read_count, write_count;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fp = open(filename, O_RDONLY);
	read_count = read(fp, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (fp == -1 || read_count == -1 || read_count != write_count)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);

	return (write_count);
}
