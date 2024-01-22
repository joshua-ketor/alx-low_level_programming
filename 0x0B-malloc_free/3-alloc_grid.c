#include "main.h"

/**
 * alloc_grid - create a 2D array of integers with elements initialized with 0
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: pointer to 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		array[h] = malloc(width * sizeof(int));
		if (array[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(array[w]);
			free(array);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			array[h][w] = 0;
	}

	return (array);
}
