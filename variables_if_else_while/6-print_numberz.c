#include <stdio.h>

/**
 * main - Prints the digits from 0 to 9
 *		  without using char.
 * Return: Always 0
 */
int main(void)
{
	int digits;

	for (digits = 48; digits <= 57; digits++)
	{
		putchar(digits);
	}
	putchar('\n');

	return (0);
}
