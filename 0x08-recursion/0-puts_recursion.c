#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string pointer
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	int a;

	a = 0;
	if (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
