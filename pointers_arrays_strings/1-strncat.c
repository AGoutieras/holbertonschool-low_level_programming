#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, pos = 0;

	while (dest[index] != '\0')
		index++;

	while (src[pos] != '\0' && pos < n)
	{
		dest[index] = src[pos];
		index++;
		pos++;
	}
	dest[index] = '\0';

	return (dest);
}
