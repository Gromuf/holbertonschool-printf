#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printUnsignedInt(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[20];  /*is big for content max unsigned int*/
    int i = 0, j, len;
    char temp;

    /*cast entier to string*/
    if (num == 0) {
        buffer[i++] = '0';
    } else {
        while (num != 0) {
            buffer[i++] = (num % 10) + '0';
            num /= 10;
        }
    }
    buffer[i] = '\0';

    /*reverse string*/
    len = i;
    for (j = 0; j < len / 2; j++) {
        temp = buffer[j];
        buffer[j] = buffer[len - j - 1];
        buffer[len - j - 1] = temp;
    }

    /*print string*/
    write(1, buffer, len);

    return len;  /*return count of string*/
}
