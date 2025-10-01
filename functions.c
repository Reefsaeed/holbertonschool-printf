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
