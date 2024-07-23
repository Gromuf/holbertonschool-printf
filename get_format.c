#include "main.h"

int (*get_format(char c))(va_list)
{
	int i = 0;
	print_t prt[] = {
		{'c', _printChar},
		{'s', _printString},
		{'%', _printPercent},
		{NULL, NULL}};

	while (prt[i].format)
	{
		if (c == prt[i].format)
		{
			return (prt[i].func);
		}
		i++;
	}
	return (NULL);
}
