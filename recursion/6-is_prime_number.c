#include "main.h"

/**
 * prime_helper - helper function to check prime numbers
 * @n: number
 * @i: current divisor
 * Return: 1 if n is prime, 0 otherwise.
 */

int prime_helper(int n, int i)
{
	if (i >= n)
		return (1);

	else if (n % i == 0)
		return (0);

	else
		return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_helper(n, 2));
}
