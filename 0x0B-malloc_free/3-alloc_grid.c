#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry point
 *
 * Description: 'A program that retuens a pointer to 2d array of ints'
 * @width: The width
 * @height: Height
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **t;

	if (width < 1 || height < 1)
		return (NULL);

	t = malloc(sizeof(int) * width * height);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
