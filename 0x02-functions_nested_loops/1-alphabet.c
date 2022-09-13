#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'A program that prints alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	print_alphabet();

	return (0);
}


void print_alphabet(void)
{
	char c = 'a';

	while (c != '{')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
