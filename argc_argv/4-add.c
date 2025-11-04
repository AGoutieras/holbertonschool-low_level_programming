#include "main.h"

/**
 * main -  adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if number contains non-digit symbols, 0 otherwise
 */

int main(int argc, char **argv)
{
	int arg_index, char_index;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (arg_index = 1; arg_index < argc; arg_index++)
	{
		for (char_index = 0; argv[arg_index][char_index] != '\0'; char_index++)
		{
			if (argv[arg_index][char_index] < '0' || argv[arg_index][char_index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[arg_index]);
	}

	printf("%d\n", sum);
	return (0);
}
