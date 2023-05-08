#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at end of file
 *
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, write_count, i = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		write_count = write(fp, text_content, i);
		if (write_count == -1)
			return (-1);
	}

	close(fp);
	return (1);
}
