#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first half of string
 * @s2: second half of string
 * @n: bytes of s2 to concatenate to s1
 * Return: concatenated string, NULL if malloc fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, i_concat = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	for (index = 0; s2[index] && index < n; index++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[i_concat++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[i_concat++] = s2[index];

	concat[i_concat] = '\0';

	return (concat);
}
