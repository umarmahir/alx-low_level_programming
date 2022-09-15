#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: 'A program to print a diagonal'
 *
 * Return: Always 0 (Success)
 * @a: The variable to be given
 */


void print_diagonal(int a)
{
	int i;
	int space;

	i = 1;
	while (i <= a)
	{
		space = i;
		while (--space)
		{
			printf(" ");
		}
		printf("\\\n");
		i++;
	}
}
