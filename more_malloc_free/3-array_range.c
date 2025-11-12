#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimal value
 * @max: maximal value
 * Return: NULL if min > max or if malloc fails,
 *		   pointer to the array otherwise.
 */

int *array_range(int min, int max)
{
	int *arr, index;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < max - min + 1; index++)
		arr[index] = min + index;

	return (arr);
}
