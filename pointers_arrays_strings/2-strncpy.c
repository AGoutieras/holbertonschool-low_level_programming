#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;
	int length = 0;

	while (src[length] != '\0')
		length++;

	for (index = 0; index < n; index++)
	{
		if (index < length)
			dest[index] = src[index];
		else
			dest[index] = '\0';
	}

	return (dest);
}
