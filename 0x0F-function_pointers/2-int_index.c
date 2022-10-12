#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Entry point
 *
 * Description: 'A program that compares elements of array'
 * @array: The array containing elements
 * @size: size of array
 * @cmp: the pointer to function that compares elements
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
}
