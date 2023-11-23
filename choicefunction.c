#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * choice_function - choice a function to print the correct format
 * according to the call
 * @specifier: type of call.
 * @list_of_argument: list of other arguments
 * Return: number of characters printed
*/
int choice_function(char specifier, va_list list_of_argument)
{
	unsigned int index = 0;
	int length = 0;
	choiceprintfunction_t typeofarg[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},

	};
	while (index < 4 && (specifier != *(typeofarg[index].symbol)))
		index++;

	if (index < 4)
	{
		length = typeofarg[index].print(list_of_argument);
	}
	else if (specifier == '%')
	{
		print_mod();
		length = 1;
	}
	else
		length = -1;
	return (length);
}
