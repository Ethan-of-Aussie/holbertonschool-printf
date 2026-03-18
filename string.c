#include "main.h"

void _char(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
}

void _string(va_list args)
{
	int i;
	char *str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}
}
