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
	unsigned int i, j;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < strlen(s2))
		m = malloc(strlen(s1) + n * sizeof(char) + 1);
	else
		m = malloc(strlen(s1) + strlen(s2) + 1);

	if (m == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		m[i] = s2[j];

	m[i] = '\0';

	return (m);
}
