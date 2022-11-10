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
	void *m;
	char *n, *r;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		m = (malloc(new_size));
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	r = ptr;
	m = malloc(sizeof(*r) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}
	n = m;
	for (i = 0; i < old_size && i < new_size; i++)
		n[i] = r++;
	free(ptr);
	return (m);
}
