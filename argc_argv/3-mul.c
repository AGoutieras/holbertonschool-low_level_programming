#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if more than 2 arguments, 0 otherwise.
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
