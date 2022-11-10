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
	char *n, *r;
	unsigned int i;

	if (ptr != NULL)
		n = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);
	r = malloc(new_size);
	if (r == NULL)
		return (NULL);
	for (i = 0; i < (old_size || i < new_size); i++)
		*(r + 1) = n[i];
	free(ptr);
	return (r);
}
