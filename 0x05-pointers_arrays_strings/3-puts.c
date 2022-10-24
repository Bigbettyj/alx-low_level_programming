#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: the string
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
