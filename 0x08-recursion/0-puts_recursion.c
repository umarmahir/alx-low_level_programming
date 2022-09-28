#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: 'A program that prints a string, followed by a new line'
 * @s: The string to print
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar("%c", *(s + i));
	_puts_recursion(s + 1);
}
