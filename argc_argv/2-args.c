#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int index;

    for (index = 0; index < argc; index++)
    {
	    printf("%s\n", argv[index]);
    }

    return (0);
}
