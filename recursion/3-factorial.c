#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number
 * Return: factorial of n, -1 if lower than 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
