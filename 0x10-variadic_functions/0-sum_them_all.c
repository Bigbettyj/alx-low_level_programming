#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all it parameters
 * @n: the parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int m, sum = 0;

	if (n == 0)
		return (0);
	
	va_start(args, n);

	for (m = 0; m < n; m++)
		sum += va_arg(args, int);
	
	va_end(args);
	return (sum);
}
