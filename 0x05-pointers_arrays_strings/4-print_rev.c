#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: 'The function that prints strings in reverse order'
 *
 * @str: The string to br displayed
 * Return: Always 0 (Success)
 */

void print_rev(char *str)
{
	int i;

	i = 1;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	while (--i)
	{
		_putchar(*str);
		i--;
		str--;
	}
	_putchar('\n');
}
