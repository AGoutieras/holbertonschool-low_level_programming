#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first half of string
 * @s2: second half of string
 * Return: concatenated string, NULL if malloc fails.
 */

char *str_concat(char *s1, char *s2)
{
	int index, i_concat = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
	len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[i_concat++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[i_concat++] = s2[index];

	return (concat);
}
