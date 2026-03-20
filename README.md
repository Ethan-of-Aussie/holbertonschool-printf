# holbertonschool-printf
# Collaboration by Ethan and Sijin


## Description
_printf is a custom implementation of the standard library printf function which writes output to stdout, the standard output stream. This implementation supports the following conversion specifiers:
* c
* s
* %
* d
* i

## Requirements
* GCC compiler
* Ubuntu 22.04 (Holberton based sandbox)
* C standard -> gnu89

## Compilation
* gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Examples
* _printf("Let's print a simple sentence.\n"); -> Let's print a simple sentence.
* _printf("%c", 'S'); -> S
* _printf("%%\n"); -> %
* _printf("%d", 1024); -> 1024

## What happens when _printf("hello %s\n", "world", 1, 2, 3, 4)?
* Output -> hello world
* _printf only reads arguments that match the format specifier which in this case is "%s"
* 1, 2, 3, 4 are never read within the va_list
