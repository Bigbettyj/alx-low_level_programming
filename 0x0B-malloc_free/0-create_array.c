#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and initialze with char c
 * @size: size of the array
 * @c: the char to initializes with
 * Return: NULL if size = 0, a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		array[m] = c;
	return (array);
}
