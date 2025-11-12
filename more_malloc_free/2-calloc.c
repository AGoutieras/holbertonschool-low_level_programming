#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements in the array
 * @size: number of bytes
 * Return: pointer to the allocated memory, NULL if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (index = 0; index < nmemb * size; index++)
		p[index] = 0;

	return (ptr);
}
