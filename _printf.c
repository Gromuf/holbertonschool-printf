#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;

	print_t prt[] = {
		{'c', _printChar},
		{'s', _printString},
		{'%', _printPercent}};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		i++;
	}
	return (0);
}
