#include "main.h"
/**
 * cap_string - Entry point
 *
 * Description: 'program that capitalizes words of a string'
 * @str: string to manipulate
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '(' || str[i] == ')'  ||
		str[i] == '?' || str[i] == ','  || str[i] == '.' || str[i]
		== '{' || str[i] == '}' || str[i] == ':' || str[i] == ';' ||
		str[i] == '!' || str[i] == '\n' || str[i] == '\t')
		{
			if (str[i + 1] > 96 && str[i + 1] < 123)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
