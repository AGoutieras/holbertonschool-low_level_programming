#include "main.h"

/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @str: the string to change.
 * Return: changed string.
 */

char *cap_string(char *str)
{
	int index = 0;
	int sep_index;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[index] != '\0')
	{
		if (index == 0 && str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - ('a' - 'A');
		}
		if (index > 0)
		{
			sep_index = 0;
			while (separators[sep_index] != '\0')
			{
				if (str[index - 1] == separators[sep_index]
				&& str[index] >= 'a' && str[index] <= 'z')
				{
					str[index] = str[index] - ('a' - 'A');
					break;
				}
				sep_index++;
			}
		}
		index++;
	}
	return (str);
}
