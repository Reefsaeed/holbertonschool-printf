#include "main.h"
/**
* _putchar - writes a single character
* @c: character to write
*
* Return: 1 on success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* print_string - Prints a string to stdout.
* @args: The list of arguments pointing to the string to print.
*
* Return: Number of characters printed (excluding null byte).
*/
int print_string(va_list args)
{

char *str = va_arg(args, char*);
int i = 0;

if (str == NULL)
str = "(null)";

while (str[i])
{
write(1, &str[i], 1);
i++;
}

return (i);
}
/**
* print_int - Prints an integer (for %d and %i)
* @args: Arguments list
*
* Return: Number of characters printed
*/
int print_int(va_list args)
{
int n = va_arg(args, int);
return (print_number(n));
}

/**
* print_number - Prints an integer recursively
* @n: Integer to print
*
* Return: Number of characters printed
*/
int print_number(int n)
{
int count = 0;
unsigned int num;

/* Handle negative numbers */
if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
{
num = n;
}

/* Print digits recursively */
if (num / 10)
count += print_number(num / 10);

count += _putchar((num % 10) + '0');
return (count);
}

/**
* print_decimal - Alias for print_int (for %d)
* @args: Arguments list
*
* Return: Number of characters printed
*/
int print_decimal(va_list args)
{
return (print_int(args));
}
