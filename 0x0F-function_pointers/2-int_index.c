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

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
