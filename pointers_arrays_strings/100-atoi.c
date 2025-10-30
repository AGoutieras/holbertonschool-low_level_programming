#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert.
 * Return: value of the converted strings.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s =='-')
			sign = -sign;

		else if (*s >= '0' && *s <= '9')
			num = num * 10 + *s - '0';
		
		else if (num > 0)
			break;
		s++;
	}
	return num * sign;
}
