#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: returns to pointer to a 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (width < 1 || height < 1)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(*(arr[i])));
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr[i]);
			free(arr);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
