#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory to fill
 * @b: byte to set
 * @n: number of bytes to fill.
 * Return: filled memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
