#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: the given number
 * Return: -1 if n < 0 and 1 if n >= 0
 */
int factorial(int n)
{
	int n;
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
	res = factorial(n);
}
