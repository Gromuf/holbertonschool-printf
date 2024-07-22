#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _strlen(const char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}
