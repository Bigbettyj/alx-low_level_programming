#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @agrc: count arguments
 * @argv: argument element
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int a, b;
	unsigned long mul;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1, a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > 57 || argv[a][b] < 48)
			{
				printf("Error\n")
					exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}