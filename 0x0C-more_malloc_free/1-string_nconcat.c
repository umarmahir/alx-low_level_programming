#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - Entry point
 *
 * Description: 'A program that copies n chars from s2 to s1'
 * @s1: The first String
 * @s2: The second string
 * @n: no. of chars to copy from s2
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int j;
	int i;
	char *t;

	i = 0;
	j = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	if (n >= strlen(s2))
		n = strlen(s2);
	t = malloc(strlen(s1) + strlen(s2) + 1);
	if (t == NULL)
	{
		return (NULL);
	}

	while (*(s1 + i) != '\0')
	{
		t[i] = *(s1 + i);
		i++;
	}

	while (j < n)
	{
		t[i] = *(s2 + j);
		j++;
		i++;
	}
	return (t);

}
