#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%ld is positive\n", n);
		else if (n < 0)
		{
			printf("%ld is negative\n", n);
			else
			{
				printf("%ld is zero\n", n);
	return (0);

}
