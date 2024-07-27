#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printInt - Prints an integer.
 * @args: List of arguments containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int _printInt(va_list args)
{
    int num = va_arg(args, int);
    return _printIntHelper(num);
}

/**
 * _printIntHelper - Helper function to print an integer.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
int _printIntHelper(int n)
{
    char buffer[20];
    int len = 0;
    int i = 0;
    int is_negative = 0;
    unsigned int num;

    if (n < 0)
    {
        is_negative = 1;
        num = -n;
    }
    else
    {
        num = n;
    }

    if (n == 0)
    {
        buffer[i++] = '0';
    }
    else
    {
        while (num > 0)
        {
            buffer[i++] = (num % 10) + '0';
            num /= 10;
        }
    }

    if (is_negative)
    {
        buffer[i++] = '-';
    }

    while (i > 0)
    {
        len += _putchar(buffer[--i]);
    }

    return len;
}