#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - Entry point
 *
 * Description: 'A program that allocates memory and sets it to 0'
 * @nmemb: The number of array members
 * @size: size of the elements in memory each
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		t[i] = 0;

	return (t);
}
