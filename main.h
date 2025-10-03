#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Main functions */
int _printf(const char *format, ...);
int _putchar(char c);

/* Function placeholders for specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);
int print_binary(va_list args);

/* Utils helpers */
int print_number(int n);
int print_binary_recursive(unsigned int n);

#endif
