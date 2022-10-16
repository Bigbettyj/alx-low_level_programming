#include <stdio.h>
/**
 * main - Entry point
 *
 * printing all alphabeths
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}
	{
		putchar('\n');
	}
	return (0);
}
