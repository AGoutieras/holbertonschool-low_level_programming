#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: prefix
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0, count = 0;

	while (s[index] != '\0')
	{
		unsigned int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[index] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;

		count++;
		index++;
	}

	return (count);
}
