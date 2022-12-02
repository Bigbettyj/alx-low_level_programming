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

	if (n == 0 && index < 64)
		return (0);

	for (b = 0; b <= 63; b >>= 1, b++)
	{
		if (index == b)
		{
			return (b & 1);
		}
	}

	return (-1);
}
