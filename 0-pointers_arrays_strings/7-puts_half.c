#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to halve.
 */

void puts_half(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
	length++;

	for (i = length / 2; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
