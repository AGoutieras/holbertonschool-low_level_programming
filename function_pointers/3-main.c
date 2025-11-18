	#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
