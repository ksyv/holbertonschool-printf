#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a char.
 * @arg: arguments pointed
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, char);
	write(STDOUT_FILENO, letter, 1);
}

/**
 * print_string - prints a string.
 * @arg: arguments pointed
 */

void print_string(va_list arg)
{
    char *string;

    string = va_arg(arg, char *);
    write(STDOUT_FILENO, string, _strlen(string));
}

/**
 * print_int - prints an int.
 * @arg: arguments pointed
 */

void print_int(va_list arg)
{
    int num;

    num = va_arg(arg, int);
    write(STDOUT_FILENO, num, 4);
}

/**
 * print_dec - Prints a dedcimal number.
 * @arg: arguments pointed
 */

void print_dec(va_list arg)
{
    int decimal;

    decimal = va_arg(arg, int);
    write(STDOUT_FILENO, decimal, 4);
}

/**
 * print_mod - Prints a modulo.
 * @arg: arguments pointed
 */

void print_mod(va_list arg)
{
    char modulo;

    modulo = va_arg(arg, char);
    write(STDOUT_FILENO, '%', 1);
}

