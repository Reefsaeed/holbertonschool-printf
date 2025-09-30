#include "main.h"
/**
* _printf - Custom printf function (skeleton)
* @format: Format string
*
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
/* TODO: implement parsing of format string and call specifier functions */
va_end(args);
return (count);
}
