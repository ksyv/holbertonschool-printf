#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * choice_function - choice a function to print the correct format
 * according to the call
 * @format: type of call.
 * @...: other arguments
*/
void choice_function(const char * const format, ...)
{
	va_list listofargument;
	unsigned int index = 0, index2 = 0;
	choiceprintfunction_t typeofarg[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_dec},
		{"s", print_string},
		{"%", print_mod},
	};
	va_start(listofargument, format);
	while (format && (*(format + index)))
	{
		index2 = 0;

		while (index2 < 5 && (*(format + index) != *(typeofarg[index2].symbol)))
			index2++;

		if (index2 < 5)
		{
			typeofarg[index2].print(listofargument);
		}
		index++;
	}
	va_end(listofargument);
}