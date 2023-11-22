#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a char.
 * @arg: arguments pointed
 * Return: number of character 1
 */

int print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	write(STDOUT_FILENO, &letter, 1);
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
	length = _strlen(string);
	write(STDOUT_FILENO, string, length);
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
	char modulo = 37;

	write(STDOUT_FILENO, &modulo, 1);
}
