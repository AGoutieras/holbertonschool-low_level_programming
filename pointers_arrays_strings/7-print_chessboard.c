#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{
	unsigned int w, h;

	for (w = 0; w < 8; w++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(a[w][h]);
		}
		_putchar('\n');
	}
}
