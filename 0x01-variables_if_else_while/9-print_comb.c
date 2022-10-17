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

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j < 57)
			putchar(',');
			putchar(' ');
	}
		putchar('\n');
	return (0);
}
