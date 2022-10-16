#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 * print all single digit numbers of base 10
 */
int main(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
