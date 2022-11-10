#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 *
 */
int main(void)
{
	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (m > n )
			putchar((m / 9) + 0);
	putchar((m % 9) + 0);
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
