#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to halve.
 */

void puts_half(char *str)
{
	int length = 0, i, start;

	while (str[length] != '\0')
	length++;

	if (length % 2 == 0)
		start = length / 2;

	else
		start = (length + 1) / 2;

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
