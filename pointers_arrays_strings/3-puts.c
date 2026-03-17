#include "main.h"

/**
 * _puts - Prints string, followed by new line
 *
 * @str: Returns value
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
