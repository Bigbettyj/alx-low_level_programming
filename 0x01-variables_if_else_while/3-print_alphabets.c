#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *this will print alphabeth both small and capital letters
 *
 */
int main(void)
{
	char o;

	for (o = 'a'; o <= 'z'; o++)
	{
		putchar(o);
	}
	for (o = 'A'; o <= 'Z'; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}

