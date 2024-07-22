#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);

int _strlen(const char *str);

int _printf(const char *format, ...);

void _printChar(va_list arg);

void _printString(va_list arg);

void _printPercent();

typedef struct printer
{
	char format;
	void (*func)(va_list arg);
} print_t;

#endif
