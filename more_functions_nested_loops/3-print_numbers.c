#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 */

void print_numbers(void)
{
	char alphabet;

	for (alphabet = '0'; alphabet <= '9'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
