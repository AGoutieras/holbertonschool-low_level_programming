#include "main.h"

/**
 * _sqrt_helper - function for helping _sqrt_recursion
 * @n: number
 * @i: used to test all numbers.
 * Return: .
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	else
		return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root of n, -1 if there is none.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
