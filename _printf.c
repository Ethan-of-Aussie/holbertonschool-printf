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
	int i;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == "%")
		{
			i++;

			switch (format[i])
			{
				case 'c':
					_char(args);
					break;
				case 's':
					_string(args);
					break;
				/**
				case 'd':
					_int(args);
					break;
				case 'i':
					_inout(args);
					break;
				*/
				default:
					write(1, &format[i - 1], 1);
					write(1, &format[i], 1);
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
	}

	va_end(args);
}	
