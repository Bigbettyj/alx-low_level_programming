#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - count string length
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s)
		i++;
	s++;
}
return (i);
}
/**
 * str_concat - concatenat two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int a, b, c;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	c += _strlen(s1) + _strlen(s2);
	cat = malloc((c * sizeof(char)) + 1);
	if (cat == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a]; a++)
	{
		cat[a] = s1[a];
	}
	for (b = 0; str[b]; b++, a++)
	{
		cat[a] = s2[b];
	}
	cat[a] = '\0';
	return (cat);
}
