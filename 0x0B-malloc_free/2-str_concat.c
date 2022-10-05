#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *
 * Description: 'A program that concatenates two strings'
 * @s1: The first string
 * @s2: Second string
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *t;
	int len1;
	int len2;
	int j;

	if (s1 == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);

	t = malloc(sizeof(char) * (len1 + len2) + 1);
	if (t == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[i] != '\0')
		{
			t[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			t[i + j] = s2[j];
			j++;
		}
		return (t);
	}
}
