#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count argument
 * @argv: arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int total, change, p, b;
	int coin[] = {25, 10, 5, 2, 1};

	total = change = p = b = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coin[p] != '\0')
	{
		if (total >= coin[p])
		{
			b = (total / coin[p]);
			change += b;
			total -= coin[p] * b;
		}
		p++;
	}
	printf("%d\n", change);
	return (0);
}
