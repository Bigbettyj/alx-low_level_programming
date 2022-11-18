#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - checks the code
 * @argc: counts argument
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int m, n, res;
	char p;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	p = *argv[2];
	if ((p == '/' || p == '%') && n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = ptr(m, n);
	printf("%d\n", res);
	return (0);
}
