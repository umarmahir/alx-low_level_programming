#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: 'A pgrm that copies contents of one address to another'
 * @dest: The location to which items should be copied
 * @src: The source of the data to be copied
 * @n: The number of places to changes
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **pptr;
	int i;

	pptr = &dest;
	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (pptr);
}
