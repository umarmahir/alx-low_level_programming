#include "main.h"

/**
 * _memset - Entry point
 *
 * Description: 'A pgrm that sets the value of sets of memory locs. to a val'
 * @s: The pointer carrying the address
 * @b: The byte
 * @n: The number of places to changes
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **pptr;
	int i;

	i = 0;
	pptr = &s;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
