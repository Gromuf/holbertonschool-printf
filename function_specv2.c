#include <unistd.h>
#include <stdarg.h>
/*#include <stdio.h>*/
#include "main.h"
/*#include <stdint.h>*/

/**
 * spec - Handles the printing of a specifier
 * @format: the format string
 * @i: the current index in the format string
 * @args: the list of arguments
 *
 * Return: the updated number of characters printed
 */
int spec(const char *format, unsigned int *i, va_list args)
/*int spec(const char *format, unsigned int *i, va_list args, int printed_chars)*/
/* fix function more than 40 lines */
{
	int printed_chars = 0;
	print_t prt[] = {
		{'c', _printChar}, 
		{'s', _printString},
		{'%', _printPercent},
		{'d', _printInt},
		{'i', _printInt},
		{'u', _printUnsigned},
		{'o', _printOctal},
		{'x', _printHexLower},  /*corrected _printHex*/
		{'X', _printHexUpper},  /*corrected _printHex*/
		{'p', _printPointer},
		/*{'b', _printBinary}, do funct b for advancee task 3 (prototype binaire with b)*/ 
		{0, NULL} /* end of specifiers array */
	};

	unsigned int j = 0;
	int found = 0; /*flag to check if specifier is recognized*/

	while (prt[j].cara) /*Iterate through the specifiers array */
	{
		if (format[*i] == prt[j].cara)  /*if cara match specifier, true*/
		{
			/*printed_chars += prt[j].func(args);*/
			/* (*i)++;  Move to the next character after the specifier */
			/*funct prt[j].func is call with list arg*/
			/*return (printed_chars);*/
			printed_chars += prt[j].func(args); /*Call the corresponding function*/
			found = 1;
			(*i)++;
			break;  /* Exit the loop once the specifier is found and processed */
		}
		j++; /*incremennt index*/
	}
	/*printed_chars += _putchar('%');  NULL _putchar % ->not in specifier*/
	/*if (format[*i]) if not NULL _putchar format specifier*/
	/*	printed_chars += _putchar(format[*i]); print the next caracter*/
	
	if (!found)
    {
        /* If specifier not found, print the '%' and the character that follows it */
        printed_chars += _putchar('%');
		/*printed_chars += _putchar(format[*i]);*/
		/*(*i)++;  Move to the next character after the specifier*/
		if (format[*i])
        /*if (format[*i]) != '\0') Check if there is a character to print*/
		/*if (format[*i] && format[*i] != '0')*/
		{
        	printed_chars += _putchar(format[*i]);
			(*i)++;
		}
	}

	return (printed_chars);
}