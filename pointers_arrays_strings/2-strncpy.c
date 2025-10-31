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
	int index = 0, length = 0;

	while (src[length] != '\0')
		length++;

	while (index < n)
	{
		if (index < length)
			dest[index] = src[index];
		else
			dest[index] = '\0';
		index++;
	}

	return (dest);
}
