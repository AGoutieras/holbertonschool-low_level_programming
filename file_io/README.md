<a href="#"><img src="https://img.shields.io/badge/-006CAF.svg?style=for-the-badge&logo=c&logoColor=white" /></a>
[![Holberton](https://img.shields.io/badge/Holberton-E31C3F.svg?style=for-the-badge)](https://www.holbertonschool.fr/)

# C - File I/O

## **[0. Tread lightly, she is near](0-read_textfile.c)**

Write a function that reads a text file and prints it to the ```POSIX``` standard output.

* Prototype: ```ssize_t read_textfile(const char *filename, size_t letters);```
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return ```0```
* if ```filename``` is ```NULL``` return ```0```
* if ```write``` fails or does not write the expected amount of bytes, return ```0```

<details>
<summary>Show answer</summary>

```bash
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
```
</details>

---

## **[1. Under the snow](1-create_file.c)**

Create a function that creates a file.

* Prototype: ```int create_file(const char *filename, char *text_content);```
* where ```filename``` is the name of the file to create and ```text_content``` is a ```NULL``` terminated string to write to the file
* Returns: ```1``` on success, ```-1``` on failure (file can not be created, file can not be written, ```write``` “fails”, etc…)
* The created file must have those permissions: ```rw-------```. If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if ```filename``` is ```NULL``` return ```-1```
* if ```text_content``` is ```NULL``` create an empty file

<details>
<summary>Show answer</summary>

```bash
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
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

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
```
</details>

---

## **[2. Speak gently, she can hear](2-append_text_to_file.c)**

Write a function that appends text at the end of a file.

* Prototype: ```int append_text_to_file(const char *filename, char *text_content);```
* where ```filename``` is the name of the file and ```text_content``` is the ```NULL``` terminated string to add at the end of the file
* Return: ```1``` on success and ```-1``` on failure
* Do not create the file if it does not exist
* If ```filename``` is ```NULL``` return ```-1```
* If ```text_content``` is ```NULL```, do not add anything to the file. Return ```1``` if the file exists and ```-1``` if the file does not exist or if you do not have the required permissions to write the file

<details>
<summary>Show answer</summary>

```bash
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
```
</details>

---

## **[3. cp](3-cp.c)**

Write a program that copies the content of a file to another file.

* Usage: ```cp file_from file_to```
* if the number of argument is not the correct one, exit with code ```97``` and print Usage: ```cp file_from file_to```, followed by a new line, on the ```POSIX``` standard error
* if ```file_to``` already exists, truncate it
* if ```file_from``` does not exist, or if you can not read it, exit with code ```98``` and print ```Error: Can't read from file NAME_OF_THE_FILE```, followed by a new line, on the ```POSIX``` standard error
  * where ```NAME_OF_THE_FILE``` is the first argument passed to your program
* if you can not create or if ```write``` to ```file_to``` fails, exit with code ```99``` and print ```Error: Can't write to NAME_OF_THE_FILE```, followed by a new line, on the ```POSIX``` standard error
  * where ```NAME_OF_THE_FILE``` is the second argument passed to your program
* if you can not close a file descriptor , exit with code ```100``` and print ```Error: Can't close fd FD_VALUE```, followed by a new line, on the ```POSIX``` standard error
  * where ```FD_VALUE``` is the value of the file descriptor
* Permissions of the created file: ```rw-rw-r--```. If the file already exists, do not change the permissions
* You must read ```1,024``` bytes at a time from the ```file_from``` to make less system calls. Use a buffer
* You are allowed to use ```dprintf```

<details>
<summary>Show answer</summary>

```bash
#include "main.h"

/**
 * main - main function to check argc and argv.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with 97 on error.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - copies the content of a file to another file.
 * @file_from: file to copy content from.
 * @file_to: file to copy content to.
 */

void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t r, w;

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * close_file - closes file descriptor
 * @fd: file descriptor to use
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
```
</details>

---

  ### By Anthony Goutieras
  Weekly project from 01/12/25 to 05/12/25 for Holberton School Bordeaux
