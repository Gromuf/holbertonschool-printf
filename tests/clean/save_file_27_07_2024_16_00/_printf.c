#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * _printf - a simple version of the printf function
 * @format: the format string containing the text to be written to stdout
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed_chars = 0;

	if (format == NULL) /* check if format is NULL */
		return (-1);

	va_start(args, format); /* initialize the argument list */

	while (format && format[i]) /*if format not NULL and i<>'\0'*/
	{
		if (format[i] == '%')
		{
			i++; /* iteration and next call funct specifier format*/
			printed_chars = spe(format, &i, args, &printed_chars);
		}
		else
		{
			/*prints formatted output and counts characters.*/
			printed_chars += _putchar(format[i]);
		}
		i++;
	}

	va_end(args); /* end using the argument list */
	return (printed_chars); /* return the number of characters printed */
}
