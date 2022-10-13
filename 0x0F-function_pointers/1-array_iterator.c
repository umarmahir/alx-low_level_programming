#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Entry point
 *
 * Description: 'A program that performs action on elements of array'
 * @array: The array containing elements
 * @size: size of array
 * @action: the pointer to function performing action
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < (int) size; i++)
		action(*(array + i));
}
