#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 *
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, integer;
	char *separator = "";
	char c;
	double f;
	char *str;

	va_start(args, format);
	if (format == NULL)
	{	return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				integer = va_arg(args, int);
				printf("%s%d", separator, integer);
				break;
			case 'f':
				f = (double)va_arg(args, double);
				printf("%s%f", separator, f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{	str = "(nil)";
				}
				printf("%s%s", separator, str);
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
