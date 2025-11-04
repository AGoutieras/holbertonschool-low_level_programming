#include "main.h"

/**
 * print_name - prints name of the program, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 */

void print_name(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	print_name(argc, argv);
	return (0);
}
