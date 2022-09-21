#include "main.h"
/**
 * _strncpy - Entry point
 *
 * Description: 'the program's description'
 * @src: Source string
 * @n: Number of strings to copy
 * @dest: Destination string
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int j;

	j = 0;
	ptr = src;

	while (j < n)
	{
		dest[j] = *(ptr + j);
		j++;
	}
	return (dest);
}
