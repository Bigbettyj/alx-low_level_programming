#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to memory
 * @old_size: size of ptr
 * @new_size: size of new memory
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r, *n = ptr;
	unsigned int i, max = new_size;

	if (ptr == NULL)
	{
		r = malloc(new_size);
		return (r);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	r = malloc(new_size);
	if (r == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
		r[i] = n[i];
	free(ptr);
	return (r);
}
