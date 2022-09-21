#include "main.h"
/**
 * _strcmp - Entry point
 *
 * Description: 'program that compares two strings'
 * @s1: First String string
 * @s2: Second string
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;

	i = 0;
	ptr = s2;
	while (s1[i] != '\0')
	{
		if (s1[i] > *(ptr + i))
		{
			j = s1[i] - *(ptr + i);
			break;
		}
		else if (s1[i] < *(ptr + i) )
		{
			j = s1[i] - *(ptr + i);
			break;
		}
		else
		{
			j = 0;
		}
		i++;
	}
        return (j);
}
