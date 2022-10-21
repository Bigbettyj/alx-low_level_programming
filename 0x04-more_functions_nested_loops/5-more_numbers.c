#include "main.h"
/**
 * more_numbers - prints 10x the numbers 0 to 14
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int b, n;

	for (n = 0; n <= 9; n++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
