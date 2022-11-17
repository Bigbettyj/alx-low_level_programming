#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints char
 * @arg: list of arguments
 */
void print_char(va_list arg)
{
	char m;

	m = va_arg(arg, int);
	printf("%c", m);
}
/**
 * print_int - prints int
 * @arg: list of arguments
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - prints float
 * @arg: list of arguments
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}
/**
 * print_str - prints strings
 * @arg: list of arguments
 */
void print_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, p = 0;
	char *str = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_char},
		{"f", print_char},
		{"s", print_char},
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		p = 0;
		while (p < 4 && (*(format + i) != *(func[p].symbol)))
			p++;

		if (p < 4)
		{
			printf("%s", str);
			func[p].print(args);
			str = ",";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
