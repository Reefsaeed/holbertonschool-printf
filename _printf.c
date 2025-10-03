#include "main.h"
/**
* _printf - Custom printf function
* @format: Format string
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return (-1);
if (*format == 'c')
count += print_char(args);
else if (*format == 's')
count += print_string(args);
else if (*format == '%')
count += print_percent(args);
else if (*format == 'd' || *format == 'i')
count += print_int(args);
else if (*format == 'b')
count += print_binary(args);
else if (*format == 'u')
count += print_unsigned(args);
else if (*format == 'o')
count += print_octal(args);
else if (*format == 'x')
count += print_hex_lower(args);
else if (*format == 'X')
count += print_hex_upper(args);
else
{
count += _putchar('%');
count += _putchar(*format);
}
}
else
{
count += _putchar(*format);
}
format++;
}
va_end(args);
return (count);
}
