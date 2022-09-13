#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'Printing characters using while statement'
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char *p = "_putchar";
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
