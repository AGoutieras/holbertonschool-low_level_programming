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
	char *buffer;
	ssize_t fd, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	r = read(fd, buffer, letters);

	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (r);
}
