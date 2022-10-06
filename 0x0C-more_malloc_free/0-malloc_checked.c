#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *
 * Description: 'A program that allocates memory'
 * @b: The amount of memory to allocate
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	char *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
