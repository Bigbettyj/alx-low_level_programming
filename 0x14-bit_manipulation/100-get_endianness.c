#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *p;

	n = 1;
	p = (char *) &n;

	return ((int)*p);
}
