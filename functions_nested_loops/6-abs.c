#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: the character to check.
 * Return: 1 if greater than 0, 0 if zero, -1 if less than zero
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
