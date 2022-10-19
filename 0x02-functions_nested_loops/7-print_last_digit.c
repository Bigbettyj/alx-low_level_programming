#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @s: the number
 * Return: last digit
 */
int print_last_digit(int s)
{
	int pa = s % 10;

	if (pa < 0)
		pa *= -1;

	_putchar(pa + '0');
	_putchar('\n');
	return (0);
}
