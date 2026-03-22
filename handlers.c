#include "main.h"

spec_t specs[] = {
      {'c', handle_char},
      {'s', handle_string},
      {'d', handle_int},
      {'i', handle_int},
      {'%', handle_percent},
      {0, NULL}
};
/**
 * handle_format - finds and calls the correct handler
 * @c: the format specifier
 * @args: the list
 *
 * Return: number of characters printed
 */
int handle_format(char c, va_list args)
{
    int i = 0;
    while (specs[i].spec != 0)
    {
        if (specs[i].spec == c)
            return (specs[i].f(args));
        i++;
    }
    write(1, "%", 1);
    write(1, &c, 1);
    return 2;
}
