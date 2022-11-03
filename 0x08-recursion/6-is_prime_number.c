#include "main.h"
/**
 * evaluate - recursion loop
 * @num: number
 * @iter: number to iterate
 * Return: return 1 or 0
 */
int evaluate(int num, int iter)
{
	if (iter == num - 1)
	{
		return (1);
	}
	else if (num % iter == 0)
	{
		return (0);
	}
	if (num % iter != 0)
	{
		return (evaluate(num, iter + 1));
	}
	return (0);
}
/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: the integer to check
 * Return: 1 if integer is a prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	int iter;

	iter = 2;
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (evaluate(n, iter));
}
