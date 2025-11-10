#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first half of string
 * @s2: second half of string
 * Return: concated string, NULL if malloc fails.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len = 0, index, i_concat;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
	len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[i_concat++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[i_concat++] = s2[index];

	return (concat);
}
