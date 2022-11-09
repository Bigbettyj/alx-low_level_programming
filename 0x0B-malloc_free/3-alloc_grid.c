#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int m;
	int n;
	int o;
	int num;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		array[m] = malloc(sizeof(int) * width);
		if (array[m] == NULL)
		{
			for (num = 0; num < m; num++)
			{
				free(array[num]);
			}
			free(array);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (o = 0; o < width; o++)
		{
			array[n][o] = 0;
		}
	}
	return (array);
}
