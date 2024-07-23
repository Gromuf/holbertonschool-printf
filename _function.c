#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
* _printchar - helper function to print a character
* @args: variable argument list
* @ptr: pointer to count of printed characters
*
*/
void _printchar(va_list args, int *ptr)


/**
* _printstr - helper function to print a string
* @args: variable argument list
* @ptr: pointer to count of printed characters
*
*/
void _printstr(va_list args, int *ptr)


/**
* _printpercent - helper function to print a percent %
* @args: variable argument list
* @ptr: pointer to count of printed characters
*
*/
void printpercent (va_list args, int *ptr)

/**
* _printdec - helper function to print a decimal
* @args: variable argument list
* @ptr: pointer to count of printed characters
*
*/
void _printdec(va_list args, int *ptr)


/**
* _printint - helper function to print an integer
* @args: variable argument list
* @ptr: pointer to count of printed characters
*
*/
void _printint(va_list args, int *ptr)
