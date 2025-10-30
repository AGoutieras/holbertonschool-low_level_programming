#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 * @c temporary integer
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;
	*b = *a;
	*a = c;
}
