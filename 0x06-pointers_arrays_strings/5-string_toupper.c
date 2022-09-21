#include "main.h"
/**
 * string_toupper - Entry point
 *
 * Description: 'program that changes lowercase chars to uppercase'
 * @str: string to manipulate
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
