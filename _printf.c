#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <stdint.h>

/**
 * spec - Handles the printing of a specifier
 * @format: the format string
 * @i: the current index in the format string
 * @args: the list of arguments
 * @printed_chars: the number of characters printed so far
 *
 * Return: the updated number of characters printed
 */
int spec(const char *format, unsigned int *i, va_list args, int printed_chars)
/* fix function more than 40 lines */
{
        print_t prt[] = {
                {'c', _printChar}, {'s', _printString}, {'%', _printPercent},
                {'d', _printInt}, {'i', _printInt}, {'u', _printUnsigned},
                {'o', _printOctal}, {'x', _printHexLower}, {'X', _printHexUpper},
                {'p', _printPointer}, {'b' _printBinary}, {0, NULL} /* end of specifiers [] */
        };

        unsigned int j = 0;

        while (prt[j].cara) /*iterate elem print_t struct prt if <> NULL */
        {
                if (format[*i] == prt[j].cara)  /*if cara match specifier, true*/
                {
                        printed_chars += prt[j].func(args);
                        /*funct prt[j].func is call with list arg*/
                        return (printed_chars);
                }
                j++; /*incrementation index*/
        }
        printed_chars += _putchar('%'); /* NULL _putchar % ->not in specifier*/
        if (format[*i]) /*if not NULL _putchar format specifier*/
                printed_chars += _putchar(format[*i]); /*print the next caracter*/

        return (printed_chars);
}