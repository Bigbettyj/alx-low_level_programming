#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: 1 if theres an error
 */
int main(int argc, char *argv[])
{
	int n, m;

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", m * n);
		return (0);
	}
	printf("Error\n");
	return (1);
}
