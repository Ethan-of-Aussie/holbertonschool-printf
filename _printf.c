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
	int i, count = 0;

	if (format == NULL)
	{
		return (-1);
	}
	
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
				return (-1);

			switch (format[i])
			{
				case 'c':
					count += handle_char(args);
					break;
				case 's':
					count += handle_string(args);
					break;
				/**
				*supposedly d and i share the _int function*/
				case 'd':
				case 'i':
					count += handle_int(args);
					break;
				
				case '%':
					count += write(1, "%", 1);
					break;
				default:
					count += write(1, &format[i - 1], 1);
					count += write(1, &format[i], 1);
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
	}

	va_end(args);
	return (count);
}	
