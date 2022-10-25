#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int m = 0;

	while (*str != '\0')
	{
		m++;
		str++;
	}

	str -= (m / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
