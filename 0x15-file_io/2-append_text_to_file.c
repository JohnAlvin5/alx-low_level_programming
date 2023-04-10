#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : name of the file
 * @text_content : string to add at the end of the file
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, write_no, i;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	i = 0;

	if (text_content)
	{
		while (text_content[i])
			i++;

		write_no = write(fp, text_content, i);

		if (write_no == -1)
			return (-1);
	}

	close(fp);
	return (1);
}
