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
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);

/* Utils helpers */
int _strlen(char *s);
int _pow(int base, int exp);
char *convert_to_base(unsigned int num, int base, int uppercase);

#endif
