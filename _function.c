#include <unistd.h>
#include <stag.h>
#include <stdio.h>
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
* _printchar
*
*/
void _printchar(va_list args, int *ptr)


/**
* _printstr
*
*/
void _printstr(va_list args, int *ptr)


/**
* _print_percent
*
*/
void print_percent (va_list args, int *ptr)

/**
* _printdec
*
*/
void _printdec(va_list args, int *ptr)


/**
* _printint
*
*/
void _printint(va_list args, int *ptr)
