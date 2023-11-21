#ifndef __PRINTF__
#define __PRINTF__
#include <stdarg.h>

typedef struct choiceprintfunction
{
	char *symbol;
	void (*print)(va_list arg);
} choiceprintfunction_t;

void print_char(va_list arg);
void print_string(va_list arg);
void print_dec(va_list arg);
void print_int(va_list arg);
void print_mod(va_list arg);
void choice_function(const char * const format, ...);
#endif