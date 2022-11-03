#include "main.h"
/**
 * check_square - makes possible to evaluate from 1 to n
 * @i: same as n
 * @j: number that iterates from 1 to n
 * Return: -1 if n does not have a natural square root
 */
int check_square(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (check_square(j, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (check_square(n, 1));
}	
