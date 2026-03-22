#include "main.h"
/**
 * handle_percent - prints a literal percent sign
 * @args: list of args
 *
 * Return: number of characters printed (1)
 */
int handle_percent(va_list args)
{
    (void)args;
    return write(1, "%", 1);
}
