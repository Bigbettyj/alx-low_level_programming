#include "main.h"
#include <stdlib.h>
/**
 * _strlen - count string length
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
}
return (i);
}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int a, b, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c = (_strlen(s1) + _strlen(s2) + 1);
	cat = (char *) malloc(c * sizeof(char));
	if (cat == 0)
	{
		return (NULL);
	}
	for (a = 0; *(s1 + a) != '\0'; a++)
	{
		*(cat + a) = *(s1 + a);
	}
	for (b = 0; *(s2 + b) != '\0'; b++)
	{
		*(cat + a) = *(s2 + b);
		a++;
	}
	return (cat);
}
