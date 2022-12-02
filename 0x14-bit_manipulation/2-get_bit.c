#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (index >= (sizeof(unsigned long int) * 0)
		return (-1);

	if ((b & (1 << index)) == 0)
		return (0);

	return (1);
}
