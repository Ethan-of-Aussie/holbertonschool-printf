#include "main.h"

/**
 * _printf - Self made printf
 *
 * @format: Character string
 *
 * Return: Function based on character string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
	{
		return (-1);
	}
	
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			count += handle_format(format[i], args
		}
	  	else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}	
