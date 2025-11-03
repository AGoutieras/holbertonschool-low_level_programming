#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to locate
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (&s[index]);
		index++;
	}

	if (c == ('\0'))
		return &s[index];
		
	return (NULL);
}
