#include "main.h"

/**
 * error - deals with tructure of error messages
 * @mesg : error message to print
 * @xtcod : exit code to return
 *
 * Return: void
 */
void error(char *mesg, int xtcod)
{
	dprintf(STDERR_FILENO, mesg, xtcod);
	dprintf(STDERR_FILENO, "\n");
	exit(xtcod);
}

/**
 * copy - copies the content of a file to another file
 * @file_from : source file
 * @file_to : destination file
 *
 * Return: 0
 */
void copy(char *file_from, char *file_to)
{
	char buffer[1024];
	int fp, src, dest, write_no;

	src = open(file_from, O_RDONLY);
	if (src < 0)
		error("Error: Can't read from file %s", 98);

	dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (dest < 0)
		error("Error: Can't write to %s", 99);

	fp = read(src, buffer, 1024);
	write_no = write(dest, buffer, fp);

	while (fp > 0)
	{
		if (write_no < 0 || write_no != fp)
			error("Error: Can't write to %s", 99);
	}

	if (fp < 0)
		error("Error: Can't read from file %s", 98);

	if (close(src) < 0)
		error("Error: Can't close fd %d", 100);

	if (close(dest) < 0)
		error("Error: Can't close fd %d", 100);
}

/**
 * main - main function
 * @argc : number of arguements
 * @argv : array of arguements
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		error("Usage: cp file_from file_to", 97);

	copy(argv[1], argv[2]);

	return (0);
}
