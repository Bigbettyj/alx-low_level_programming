#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>

/**
 * struct printer - new struct type defining a printer
 * @symbol: symbol representing data type
 * @print: prints data coresponding to symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
}
printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
