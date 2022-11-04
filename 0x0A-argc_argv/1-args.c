#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
