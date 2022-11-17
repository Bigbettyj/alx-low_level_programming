#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int p;

	va_start(num, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(num, int));
		if (p != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf('\n');

	va_end(num);
}
