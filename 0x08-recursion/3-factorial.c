#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: the given number
 * Return: -1 if n < 0 and 1 if n >= 0
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);
}
