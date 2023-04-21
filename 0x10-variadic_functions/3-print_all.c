#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char* const format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == 'c') printf("%c", (char) va_arg(args, int));
        else if (*format == 'i') printf("%d", va_arg(args, int));
        else if (*format == 'f') printf("%f", (float) va_arg(args, double));
        else if (*format == 's') printf("%s", va_arg(args, char*) ? : "(nil)");
        format++;
        if (*format && (*format == 'c' || *format == 'i' || *format == 'f' || *format == 's')) printf(", ");
    }
    printf("\n");
    va_end(args);
}
