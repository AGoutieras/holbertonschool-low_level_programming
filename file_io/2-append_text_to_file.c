#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append text to
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
		;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
