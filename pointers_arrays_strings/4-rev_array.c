#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int index = 0;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
