#include <stdarg.h>
#include <stdint.h>  /* For uintptr_t */
#include "main.h"
#include <unistd.h>

/**
 * _printPointer - Prints a pointer address.
 * @args: The list of arguments (va_list).
 *
 * Return: The number of characters printed.
 */
int _printPointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    uintptr_t address = (uintptr_t)ptr;  /* Use uintptr_t for pointer-to-integer conversion */
    int count = 0;
	int i;

int leading_zero = 1;

    count += _putchar('0');
    count += _putchar('x');  /* Print the '0x' prefix */

    if (ptr == NULL)
    {
        count += _putchar('0');
        return (count);
    }

    /* Convert the address to hexadecimal and print it */
    for (i = (sizeof(uintptr_t) * 8) - 4; i >= 0; i -= 4)  /* Process each hexadecimal digit */
    {
        int digit = (address >> i) & 0xF;
        if (digit != 0 || !leading_zero) /*gap 0 while digit is find */
        {
            leading_zero = 0;
            if (digit < 10)
                count += _putchar(digit + '0');
            else
                count += _putchar(digit - 10 + 'a');
        }
    }

    return (count);
}