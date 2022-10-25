#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int pass[100];
	int a, b, c;

	a = 0;

	srand(time(NULL));

	for (b = 0; b < 100; b++)
	{
		pass[b] = rand() % 78;
		a += (pass[b] + '0');
		putchar(pass[b] + '0');
		if ((2772 - a) - '0' < 78)
		{
			c = 2772 - a - '0';
			a += c;
			putchar(c + '0');
			break;
		}
	}
}
