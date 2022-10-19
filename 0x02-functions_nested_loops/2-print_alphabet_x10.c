#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x with new line
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char p;

	for (n = 0; n <= 9; n++)
	{
		for (p = 'a'; p <= 'z'; p++)
			_putchar(p);

		_putchar('\n');
	}
}
