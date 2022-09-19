#include "main.h"
#include <string.h>
/**
 * rev_string - Entry point
 *
 * Description: 'The function that prints strings in reverse order'
 *
 * @str: The string to br displayed
 * Return: Always 0 (Success)
 */

void rev_string(char *str)
{
	int length;
	int i;

	length = strlen(str);
	for (i = (length - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
