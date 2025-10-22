#include "main.h"

/**
 * int print_sign - prints the sign of a number.
 *
 * @n: the character to check.
 * Return: 1 if greater than 0, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(1);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(-1);
		return (-1);
	}
}
