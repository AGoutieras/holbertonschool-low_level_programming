#include "main.h"

/**
 * more_numbers - 
 *				
 */

void more_numbers(void)
{
	int count = 0, numbers;

	while (count++ <= 9)
	{
		for (numbers = 0; numbers <= 14; numbers++)
        {
            if (numbers >= 10)
                _putchar('1');
            _putchar(numbers % 10 + '0');
        }
		_putchar('\n');
	}
}
