#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 *
 * Description: 'A program that duplicates a given string'
 * @str: The given string
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int i;
	char *t;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	len = strlen(str);
	t = malloc(len);
	while (str != '\0')
	{
		t[i] = str[i];
		i++;
	}
	if (t == NULL)
	{
		return (NULL);
	}
	else
		return (t);
}
