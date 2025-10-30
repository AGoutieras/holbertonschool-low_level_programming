#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, pos = 0;

	while (dest[index] != '\0')
		index++;

	while (src[pos] != '\0')
	{
		dest[index] = src[pos];
		index++;
		pos++;
	}
	dest[index] = '\0';

	return (dest);
}
