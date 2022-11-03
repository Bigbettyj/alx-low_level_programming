#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the integer
 * @y: the power to be raise to
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	long int res;

	if (y < 0)
	{
		return (-1);
	}
	res = _pow_recursion(x, y);
}
