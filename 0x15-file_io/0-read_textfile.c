#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 *	POSIX standard output
 * @filename : name of text file
 * @letters : number of letters t reads and prints
 *
 * Return: number of letters reaad and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fp, read_no, print_no;

	if (!filename)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);

	fp = open(filename, O_RDONLY);
	read_no = read(fp, str, letters);
	print_no = write(STDOUT_FILENO, str, read_no);

	if (fp == -1 || print_no == -1 || read_no != print_no)
	{
		free(str);
		return (0);
	}

	free(str);
	close(fp);

	return (print_no);
}
