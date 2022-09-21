#include "main.h"
/**
 * _strcat - Entry point
 *
 * Description: 'the program's description'
 * @src: Source string
 * @dest: Destination string
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;
	int i;

	i = 1;
	ptr = src;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*ptr != '\0')
	{
		dest[i] = *ptr;
		i++;
		ptr++;
	}
	return (dest);

}
