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
	int m, n;
	int (*ptr)(int, int);

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(m, n));
	return (0);
}
