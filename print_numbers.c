#include "main.h"
/**
* print_int - Prints an integer (for %d and %i)
* @args: Arguments list
* Return: Number of characters printed
*/
int print_int(va_list args)
{
int n = va_arg(args, int);
return (print_number(n));
}
/**
* print_decimal - Alias for print_int (for %d)
* @args: Arguments list
* Return: Number of characters printed
*/
int print_decimal(va_list args)
{
return (print_int(args));
}
/**
* print_binary - Prints an unsigned integer in binary format
* @args: Arguments list containing the unsigned int
* Return: Number of characters printed
*/
int print_binary(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_binary_recursive(n));
}
/**
* print_number - Prints an integer recursively
* @n: Integer to print
* Return: Number of characters printed
*/
int print_number(int n)
{
int count = 0;
unsigned int num;
if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
{
num = n;
}
if (num / 10)
count += print_number(num / 10);
count += _putchar((num % 10) + '0');
return (count);
}
/**
* print_binary_recursive - Helper function to print binary recursively
* @n: Unsigned integer to convert to binary
* Return: Number of characters printed
*/
int print_binary_recursive(unsigned int n)
{
int count = 0;
if (n / 2)
count += print_binary_recursive(n / 2);
count += _putchar((n % 2) + '0');
return (count);
}
/**
* print_unsigned - Prints an unsigned integer
* @args: Arguments list
* Return: Number of characters printed
*/
int print_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_unsigned_number(n));
}
/**
* print_unsigned_number - Prints an unsigned integer recursively
* @n: Unsigned integer to print
* Return: Number of characters printed
*/
int print_unsigned_number(unsigned int n)
{
int count = 0;
if (n / 10)
count += print_unsigned_number(n / 10);
count += _putchar((n % 10) + '0');
return (count);
}
/**
* print_octal - Prints an unsigned integer in octal
* @args: Arguments list
* Return: Number of characters printed
*/
int print_octal(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_octal_recursive(n));
}
/**
* print_octal_recursive - Helper function to print octal recursively
* @n: Unsigned integer to convert to octal
* Return: Number of characters printed
*/
int print_octal_recursive(unsigned int n)
{
int count = 0;
if (n / 8)
count += print_octal_recursive(n / 8);
count += _putchar((n % 8) + '0');
return (count);
}
/**
* print_hex_lower - Prints an unsigned integer in lowercase hex
* @args: Arguments list
* Return: Number of characters printed
*/
int print_hex_lower(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_hex_recursive(n, 0));
}
/**
* print_hex_upper - Prints an unsigned integer in uppercase hex
* @args: Arguments list
* Return: Number of characters printed
*/
int print_hex_upper(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
return (print_hex_recursive(n, 1));
}
/**
* print_hex_recursive - Helper function to print hex recursively
* @n: Unsigned integer to convert to hex
* @uppercase: 1 for uppercase, 0 for lowercase
* Return: Number of characters printed
*/
int print_hex_recursive(unsigned int n, int uppercase)
{
int count = 0;
int remainder;
if (n / 16)
count += print_hex_recursive(n / 16, uppercase);
remainder = n % 16;
if (remainder < 10)
count += _putchar(remainder + '0');
else
{
if (uppercase)
count += _putchar(remainder - 10 + 'A');
else
count += _putchar(remainder - 10 + 'a');
}
return (count);
}
