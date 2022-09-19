#include "main.h"
#include <string.h>
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
	int length;

	length = strlen(str);
	for (int i = (length - 1); i >= 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
