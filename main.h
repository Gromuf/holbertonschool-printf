#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);

int _strlen(const char *str);

int _printf(const char *format, ...);

int _printChar(va_list arg);

int _printString(va_list arg);

int _printPercent(void);

int (*get_format(char c))(va_list);

typedef struct printer
{
	char format;
	void (*func)(va_list arg);
} print_t;

#endif
