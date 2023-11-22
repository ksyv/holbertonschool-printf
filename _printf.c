#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * 
*/
int _printf(const char *format, ...)
{
    int numberprintchar = 0, index = 1;
    va_list list_of_argument;

    if (format == NULL)
        return (-1);
    va_start (list_of_argument, format);
    for (index = 0; format[index] != '\0'; index++)
    {
        if (format[index] != '%')
        {
            _putchar(format[index]);
            numberprintchar++;
        }
        else
        {
            index++;
            choice_function(format[index], list_of_argument);
        }
    }
    return (numberprintchar);
}