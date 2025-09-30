#include <unistd.h>
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
