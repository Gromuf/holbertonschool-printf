#include "main.h"

/**
 * _printChar - Prints a character from a va_list
 * @arg: The va_list containing the character to print
 *
 * Description: This function retrieves a character from the va_list
 * argument and prints it using the _putchar function.
 *
 * Return: The number of characters printed (always 1)
 */
int _printChar(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	return (_putchar(c));
}

/**
 * _printString - Prints a string from a va_list
 * @arg: The va_list containing the string to print
 *
 * Description: This function retrieves a string from the va_list argument and
 * prints it character by character using the _putchar function.
 *
 * Return: The number of characters printed
 */
int _printString(va_list arg)
{
	char *s;
	int i = 0;
	int count = 0;

	s = va_arg(arg, char *);

	while (*s != '\0')
	{
		_putchar(s[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * printPercent - Prints a percent sign from a va_list
 * @arg: The va_list containing the character to print
 *
 * Description: This function retrieves an integer from the va_list argument
 * and prints it as a character using the _putchar function.
 *
 * Return: The number of characters printed (always 1)
 */
int printPercent(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	return (_putchar(i));
}
