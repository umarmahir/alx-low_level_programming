#include "main.h"
/**
 * leet - Entry point
 *
 * Description: 'program that encodes strings t0 1337'
 * @s: string to manipulate
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
			s[i]  = '3';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';

		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
