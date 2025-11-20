#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: type of argument
 */

void print_all(const char * const format, ...)
{
	unsigned int index = 0, sep = 0;
	char *str;

	va_list args;

	va_start(args, format);

	while (format != NULL && format[index] != '\0')
	{
		if (sep)
			printf(", ");
		sep = 1;
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				sep = 0;
				break;
		}
		index++;
	}
	printf("\n");
	va_end(args);
}
