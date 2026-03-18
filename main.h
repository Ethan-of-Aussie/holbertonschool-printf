#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void _char(va_list args);
void _string(va_list args);
void _int(va_list args);
void _inout(va_list args);
#endif
