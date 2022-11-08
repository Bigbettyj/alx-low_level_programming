#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: the string to be duplicated
 * Return: pointer to the duplicated string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	int n, m = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
	m++;
	m += 1;
	dest = malloc(sizeof(char) * m);
	if (dest == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		dest[n] = str[n];
	return (dest);
}
