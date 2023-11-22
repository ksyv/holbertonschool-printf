#ifndef __PRINTF__
#define __PRINTF__
#include <stdarg.h>

typedef struct choiceprintfunction
{
	char *symbol;
	void (*print)(va_list);
} choiceprintfunction_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void print_char(va_list arg);
void print_string(va_list arg);
void print_dec(va_list arg);
void print_int(va_list arg);
void print_mod(void);
void choice_function(char specifier, va_list);

#endif