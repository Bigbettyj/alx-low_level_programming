#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: the first integer
 * @b: the second integer
 * @c: third int
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
