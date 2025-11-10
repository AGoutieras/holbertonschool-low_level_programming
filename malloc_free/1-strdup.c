#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string
 * Return: duplicated string, NULL if malloc fails.
 */

char *_strdup(char *str)
{
	int index, len = 0;
	char *dupe;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupe = malloc(sizeof(char) * (len + 1));

	if (dupe == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dupe[index] = str[index];
	dupe[len] = '\0';

	return (dupe);
}
