#include "main.h"
#include <stdarg.h>

/**
 * _printHex - Prints an unsigned integer in hexadecimal format.
 * @args: List of arguments containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int _printHex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char buffer[8]; /* Enough for hexadecimal representation */
	int i = 0, j;
	char hex_chars[] = "0123456789abcdef";

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		buffer[i++] = hex_chars[num % 16];
		num /= 16;
	}

	for (j = i - 1; j >= 0; j--)
		count += _putchar(buffer[j]);

	return (count);
}
