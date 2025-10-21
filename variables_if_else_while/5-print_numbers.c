#include <stdio.h>

/**
 * main - Prints the digits
 *		  from 0 to 9
 *
 * Return: Always 0
 */

int main(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{	
	    putchar(digits);
	}
	putchar('\n');

	return (0);
}
