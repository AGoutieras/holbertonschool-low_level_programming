#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string to change.
 * Return: changed string.
 */

char *leet(char *str)
{
	int index = 0;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (str[index] != '\0')
	{
		int j;

		for (j = 0; letters[j]; j++)
		{
			if (str[index] == letters[j])
			{
				str[index] = numbers[j];
				break;
			}
		}
		index++;
	}

	return (str);
}
