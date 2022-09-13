#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'Printing characters using while statement'
 *
 * Return: Always 0 (Success)
 */


int main (void)
{
	char *p = "_putchar";


	while ( p )
	{
		_putchar(p);
		p++;
	}
	_putchar('\n');

	return (0);
}
