#include "main.h"
/**
* _putchar - writes a single character
* @c: character to write
* Return: 1 on success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* print_char - prints a character
* @args: argument list
* Return: number of characters printed
*/
int print_char(va_list args)
{
return (_putchar(va_arg(args, int)));
}
/**
* print_string - Prints a string to stdout.
* @args: The list of arguments pointing to the string to print.
* Return: Number of characters printed
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
* print_percent - prints a percent sign
* @args: argument list
* Return: number of characters printed
*/
int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}
