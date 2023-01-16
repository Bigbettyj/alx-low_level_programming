#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * @s: the string
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int m = 0;

	while (*s != '\0')
	{
		m++;
		s++;
	}
	return (m);
}
