#include "main.h"

/**
 * _printChar - Prints a character.
 * @arg: List of arguments containing the character to be printed.
 *
 * This function extracts a character from the argument list and prints it
 * using the _putchar function. The character is retrieved as an int,
 * because va_arg treats variadic arguments as integers.
 */
void _printChar(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
}

/**
 * _printString - Prints a string.
 * @arg: List of arguments containing the string to be printed.
 *
 * This function extracts a string from the argument list and prints it
 * character by character using the _putchar function. It continues to
 * print characters until it encounters the null character ('\0'), which
 * indicates the end of the string.
 */
void _printString(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * printPercent - Prints the '%' character literally.
 *
 * This function simply prints the '%' character using the _putchar
 * function. It allows displaying the '%' symbol in the output text.
 */
void printPercent(void)
{
	_putchar('%');
}
