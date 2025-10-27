#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: number of '#' characters to be printed.
 */

void print_square(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
