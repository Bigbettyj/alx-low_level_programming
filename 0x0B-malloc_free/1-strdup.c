#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: the string to be duplicated
 * Return: pointer to the duplicated string, NULL if str = NULL
 */
char *_strdup(char *str)
{
	int m, n;
	char *dest;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;
	dest = malloc(sizeof(char) * (n = 1));
	if (dest == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		dest[m] = str[m];
	return (dest);
}
