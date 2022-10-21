#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of '\' to be printed
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int p, i;

	if (n <= 0)
		_putchar('\n');

	for (p = 0; p < n; p++)
	{
		for (i = 0; i < p; i++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
