#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: the pointer character
 * @n: the number of elements of the array to be printed
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
			printf(", ");
	}

	printf("\n");
}
