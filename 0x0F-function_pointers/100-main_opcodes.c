#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: counts arguments
 * @argv: vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *arr;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(1);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", arr[i] & 0xFF);
		if (i != bytes - 1)
		{
			printf(" ");
		}
		printf("\n");
	}
	return (0);
}
