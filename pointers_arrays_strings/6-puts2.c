#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character, followed by a new line.
 * @str: string to print.
 */

void puts2(char *str)
{
	int length = 0, index = 0;

	while (str[length] != '0')
		length++;

		for (index = 0; index < length; index += 2)
			_putchar(str[index]);

		_putchar('\n');
}
