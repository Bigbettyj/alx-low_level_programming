#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	char rv = s[0];
	int d = 0;
	int k;

	while (s[d] != '\0')
		d++;
	for (k = 0; k < d; k++)
	{
		c--;
		rv = s[k];
		s[k] = s[d];
		s[d] = rv;
	}
}
