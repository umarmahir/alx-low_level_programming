#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
