#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a char.
 * @arg: arguments pointed
 * Return: number of character 1
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_string - prints a string.
 * @arg: arguments pointed
 * Return: number of characters
 */

int print_string(va_list arg)
{
	char *string;
	int length = 0;

	string = va_arg(arg, char *);
	if (string == NULL)
		string = "(null)";
	while (string[length] != '\0')
	{
		_putchar(string[length]);
		length++;
	}
	return (length);
}

/**
 * print_int - prints an int.
 * @arg: arguments pointed
 * Return: number of numbers
 */

int print_int(va_list arg)
{
	int argnum = va_arg(arg, int);
	unsigned int num = argnum;
	int define_num_of_numbers = 1;
	int length = 0;

	if (argnum < 0)
	{
		_putchar('-');
		length++;
		num = -argnum;
	}
	while (num / define_num_of_numbers > 9)
		define_num_of_numbers *= 10;
	while (define_num_of_numbers >= 1)
	{
		_putchar('0' + num / define_num_of_numbers);
		length++;
		num %= define_num_of_numbers;
		define_num_of_numbers /= 10;
	}
	return (length);
}
/**
 * print_mod - Prints a modulo.
 */

void print_mod(void)
{
	_putchar(37);
}
