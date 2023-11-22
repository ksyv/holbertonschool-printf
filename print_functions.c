#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a char.
 * @arg: arguments pointed
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	write(STDOUT_FILENO, &letter, 1);
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
    int argnum = va_arg(arg, int);
    unsigned int num = argnum;
    int define_num_of_numbers = 1;

    if (argnum < 0)
    {
        _putchar('-');
        num = -argnum;
    }
    while (num/define_num_of_numbers > 9)
        define_num_of_numbers *= 10;
    while (define_num_of_numbers >= 1)
    {
        _putchar('0' + num/define_num_of_numbers);
        num %= define_num_of_numbers;
        define_num_of_numbers /= 10;
    }
}
/**
 * print_mod - Prints a modulo.
 * @arg: arguments pointed
 */

void print_mod(void)
{
    char modulo = 37;
    write(STDOUT_FILENO, &modulo, 1);
}

