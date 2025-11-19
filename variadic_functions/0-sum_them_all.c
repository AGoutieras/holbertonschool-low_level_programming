#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of parameters, returns 0 if none
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
