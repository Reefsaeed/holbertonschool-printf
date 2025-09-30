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
/* Placeholder for %s */
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
/* Placeholder for %% */
int print_percent(va_list args)
{
/* TODO: implement %% */
return (0);
}
