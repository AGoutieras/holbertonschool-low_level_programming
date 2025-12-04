#include "main.h"

/**
 * read_textfile - reads a text file
 *				   and prints it to the POSIX standard output.
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print.
 *         if filename is NULL return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write(1, buffer, r);
	if (w != r)
	{
		free(buffer)
		close(fd)
		return (0);
	}

	free(buffer);
	close(fd);

	return (r);
}
