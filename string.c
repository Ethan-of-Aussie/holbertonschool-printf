#include "main.h"

int handle_char(va_list args)
{
	char c;
	c = va_arg(args, int);
	write(1, &c, 1);
	
	return (1);
}

int handle_string(va_list args)
{
	int i;
	char *str;
	
	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}

	return (i);
}
