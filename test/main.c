#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
	_printf("%!%K\n");/*test with %! and %K identifier*/
	printf("%!%K\n");
	_printf("%i\n", 2147483647); /* Test with int max*/
	printf("%i\n", 2147483647);
	_printf("%i\n", -2147483648); /* Test with int min*/
	printf("%i\n", -2147483648);
	_printf("%i\n", 2147483650); /* Test with more of int max*/
	printf("%i\n", 2147483650);
	_printf("%i\n", -2147483650); /* Test with less of int min*/
	printf("%i\n", -2147483650);
	_printf("%c\n", "toolong"); /*Test %c with string of carac*/
	printf("%c\n", "toolong");
	_printf("%s\n", "Lorem ipsum dolor sit amet,\
	 consectetur adipiscing elit, sed do eiusmod tempor incididunt \
	 ut labore et dolore magna aliqua. Ut enim ad minim veniam, \
	 quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea \
	 commodo consequat. Duis aute irure dolor in reprehenderit in voluptate \
	  velit esse cillum dolore eu fugiat nulla pariatur. \
	  Excepteur sint occaecat cupidatat non proident, \
	  sunt in culpa qui officia deserunt mollit anim id est laborum."); /*Test a long text*/
	printf("%s\n", "Lorem ipsum dolor sit amet,\
	 consectetur adipiscing elit, sed do eiusmod tempor incididunt \
	 ut labore et dolore magna aliqua. Ut enim ad minim veniam, \
	 quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea \
	 commodo consequat. Duis aute irure dolor in reprehenderit in voluptate \
	  velit esse cillum dolore eu fugiat nulla pariatur. \
	  Excepteur sint occaecat cupidatat non proident, \
	  sunt in culpa qui officia deserunt mollit anim id est laborum.");
    return (0);
}
