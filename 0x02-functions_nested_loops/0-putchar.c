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
	int strl = strlen(p);


	for (i = 0; i < strl; i++)
	{
		_putchar(p[i]);
		p++;
	}
	_putchar('\n');

	return (0);
}
