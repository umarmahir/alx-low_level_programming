#include "main.h"
#include <string.h>

/**
 * _strchr - Entry point
 *
 * Description: 'A pgrm that checks for a char in a string'
 * @s: The string to check on
 * @c: The char to check
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;
	char **pp;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			pp = &(s[i]);
			return (pp);
		}
		if ((i == strlen(s) - 1) && (s[i] != c))
		{
			return (NULL);
		}
		i++;
	}
}
