#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'A program that prints alphabets 10 times'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
	char c = 'a';

	while (c != '{')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	i++;
	}
}
