#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - causes normal process termination with a status value of 98
 * @b: memory
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
