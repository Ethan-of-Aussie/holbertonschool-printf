#include "main.h"
/**
 */
void _int(va_list args)
{
	int num = va_arg(args, int);
	char buffer[20];
	int len = int_to_string(num, buffer);
	write(1, buffer, len);
}
