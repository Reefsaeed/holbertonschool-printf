_printf - Custom printf Implementation

This project is a custom implementation of the printf function in C, recreated from scratch as part of the Holberton School curriculum.

Description

The _printf function produces output according to a format string and returns the number of characters printed (excluding the null byte used to end output to strings).

This implementation handles the basic conversion specifiers required for the project.

Prototype

    int _printf(const char *format, ...);

Supported Format Specifiers

    %c    Prints a single character
    %s    Prints a string
    %d    Prints a signed decimal integer
    %i    Same as %d
    %%    Prints a literal percent sign

Compilation

All files will be compiled on Ubuntu 20.04 using:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

Usage

    _printf("Hello %s!\n", "world");
    // Output: Hello world!

    _printf("Number: %d\n", 123);
    // Output: Number: 123

    _printf("Percent: %%\n");
    // Output: Percent: %

Requirements

- No use of standard printf
- Use of variadic macros: va_start, va_arg, va_end
- Code must follow Betty style
- All files must end with a new line
- No use of global variables

Testing

You can test with a simple main:

    #include "main.h"

    int main(void)
    {
        _printf("Test string: %s\n", "Hello");
        _printf("Test number: %d\n", 42);
        _printf("Test char: %c\n", 'A');
        return (0);
    }

Compile with:

    gcc *.c -o printf_test && ./printf_test

Files

- main.h         – Header file with prototypes
- _printf.c      – Main printf logic
- print_string.c – Handles strings
- print_int.c    – Handles integers
- print_number.c – Helper for printing numbers
- _putchar.c     – Low-level character output
- man_3_printf   – Manual page for _printf
- AUTHORS        –Nawaf Saleh, Reef Saeed
