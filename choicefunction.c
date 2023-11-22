#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * choice_function - choice a function to print the correct format
 * according to the call
 * @specifier: type of call.
 * @...: other arguments
*/
void choice_function(char specifier, va_list list_of_argument)
{
	unsigned int index = 0;
	choiceprintfunction_t typeofarg[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},

	};
	while (index < 2 && (specifier != *(typeofarg[index].symbol)))
		index++;

	if (index < 2)
	{
		typeofarg[index].print(list_of_argument);
	}
	else
		print_mod();
}