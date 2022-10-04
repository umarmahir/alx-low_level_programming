#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 *
 * Description: 'that creates an array of chars'
 * @size: Size of the array
 * @c: The char to fill the array
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	if (t != NULL)
		return (t);
	else
		return (NULL);
}
