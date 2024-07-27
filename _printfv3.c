/*#include <unistd.h>*/
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/*#include <stdint.h>*/

/**
 * _printf - a simple version of the printf function
 * @format: the format string containing the text to be written to stdout
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    unsigned int i = 0;
    int printed_chars = 0;

    /*if (!format)*/
        /*return (-1);*/

    if (format == NULL)
        /*return (0);  Handle NULL format*/
        return (-1);  /*or any error code*/

    va_start(args, format);

    /*while (format && format[i])*/
    while (format [i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i])
            {
                printed_chars += spec(format, &i, args);
            }
            else
            {
                printed_chars += _putchar('%');
            }
        }
        else
        {
            printed_chars += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return printed_chars;
}