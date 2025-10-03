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
