#include "main.h"
/**
 * print_line - prints a straight line
 * @n: number of '_' to be printed
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
			_putchar('_');
	}
	_putchar('\n');
}
