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
int _printChar(va_list args)
{
	char c = va_arg(args, int); /*va_arg retourne un int pour un char*/
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
int _printString(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
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
int printPercent(va_list args)
{
	(void)args; /*avoid the unused parameter warning*/
	return (_putchar('%'));
}
