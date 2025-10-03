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
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);

/* Utils helpers */
int print_number(int n);
int print_binary_recursive(unsigned int n);
int print_unsigned_number(unsigned int n);
int print_octal_recursive(unsigned int n);
int print_hex_recursive(unsigned int n, int uppercase);

#endif
