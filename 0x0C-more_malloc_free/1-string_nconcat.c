#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: numberv of byte
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int k = n;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		k++;
	p = malloc((k + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	k = 0;

	for (i = 0; s1[i]; i++)
	{
		p[k++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		p[k++] = s2[i];
	}
	p[k] = '\0';
	return (p);
}
