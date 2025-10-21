#include <stdio.h>

/**
 * main - Prints the digits from 0 to 9
 *        separated by "," 
 *
 * Return: Always 0
 */
int main(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
    if (digits != '9')
    {
    putchar(',');
    putchar(' ');
    }

	}
	putchar('\n');

	return (0);
}
