#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: the string
 * Return: Always 0 (success)
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
