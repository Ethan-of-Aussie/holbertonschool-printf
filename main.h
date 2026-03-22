#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct specifier - maps a format specifier to a function
 * @spec: the format character (e.g. 'c', 's', 'd')
 * @f: pointer to the handler function
*/
typedef struct specifier
{
char spec;
int (*f)(va_list);
} spec_t
int handle_format(char c, va_list args);

int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_percent(va_list args);
int int_to_string(long num, char *buffer);
void reverse_string(char *str, int length);
/*void _inout(va_list args);*/
#endif
