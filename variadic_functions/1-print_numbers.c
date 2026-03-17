#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by new line
 *
 * @seperator: Goes between numbers
 *
 * @n: Number of parameters to be used
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator != NULL && i < n - 1)
		{
			printf("%s", seperator);
		}
	}

	printf("\n");
	va_end(args);
}
