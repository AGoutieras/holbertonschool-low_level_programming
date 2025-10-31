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
	int i;
	int length = 0;

	while (src[length] != '\0')
		length++;

	for (i = 0; i < n; i++)
	{
		if (i < length)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}
