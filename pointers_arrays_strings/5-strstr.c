#include "main.h"

/**
 * _strstr - locates a substring.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int index = 0;

	while (haystack[index] != '\0')
	{
		unsigned int j = 0;

		while (needle[j] != '\0' && haystack[index + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
			return &haystack[index];

		index++;
	}
	return (NULL);
}
