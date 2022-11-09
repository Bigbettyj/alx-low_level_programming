#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: width
 * @av: height
 * Return: pointer to a new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
