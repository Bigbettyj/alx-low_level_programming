#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int j;

	for (j = '0'; j <= 9; j++)
	{
		putchar((j % 9) + '0');
	}
			if (j == 9)
			{
				putchar(',');
				putchar(' ');
			}
		putchar('\n');
		return (0);
}

