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
	int n, mul;

	mul = 0;
	if (argc < 2)
	{
		for (n = 0; n < argc; n++)
		{
			printf("%s\n", argv[n]);
			mul = mul * atoi(argv[n]);
			printf("%d\n", mul);
		}
		printf("Error\n");
		return (1);
	}
	return (0);
}
