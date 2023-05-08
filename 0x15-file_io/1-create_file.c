#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fp, write_count, i = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		write_count = write(fp, text_content, i);
		if (write_count == -1)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
