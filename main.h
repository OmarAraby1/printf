#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;
int _printf(const char *format, ...);
int _putchar(char c);
int get_function(char con_spec, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);

#endif
