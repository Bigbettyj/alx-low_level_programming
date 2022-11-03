#include "main.h"
/**
 * check_square - makes possible to evaluate from 1 to n
 * @i: same as n
 * @j: number that iterates from 1 to n
 * Return: -1 if n does not have a natural square root
 */
int check_square(int i, int j)
{
	if (j == 0 || j == 1)
		return (j);
	else if (i * i < j)
	return (check_square(i + 1, j));
	else if (i * i == j)
		return (i);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	return (check_square(i, n));
}
