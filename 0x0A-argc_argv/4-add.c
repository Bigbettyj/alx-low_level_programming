#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * check_num - checks string for digits
 * @str: array
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: count argument
 * @argv: arguments
 * Return: 1 if theres Error
 */
int main(int argc, char *argv[])
{
	int strl;
	int count;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			strl = atoi(argv[count]);
			sum += strl;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
