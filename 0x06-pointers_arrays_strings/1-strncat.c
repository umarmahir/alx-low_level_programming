#include "main.h"
/**
 * _strncat - Entry point
 *
 * Description: 'the program's description'
 * @src: Source string
 * @n: Number of strings to copy
 * @dest: Destination string
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i;
	int j;

	i = 1;
	j = 0;
	ptr = src;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = *(ptr + j);
		i++;
		j++;
	}
	return (dest);
}
