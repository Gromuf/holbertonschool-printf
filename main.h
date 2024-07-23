#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/*helper function*/
int _putchar(char c);
void _printchar(va_list args, int *ptr);
void _printstr(va_list args, int *ptr);
void printpercent (va_list args, int *ptr);
void _printdec(va_list args, int *ptr);
void _printint(va_list args, int *ptr);

/*prototype for _printf*/
int _printf(const char *format, ...);

#endif
