#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase with new line
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}

	_putchar('\n');
}
