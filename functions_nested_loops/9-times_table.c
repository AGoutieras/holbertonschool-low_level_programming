#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int numb, mult, prod;

	for (numb = 0; numb <= 9; numb++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = numb * mult;

			if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}

			if (prod >= 10)
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
