#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sums up all it parameters
 * @n: the parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int m, sum;

	va_start (args, n);

	for (m = 0, m < n, m++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(args, const unsigned int);

		va_end (args);
		return (sum);
	}
}

