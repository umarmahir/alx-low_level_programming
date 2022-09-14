#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Description: 'A program that prints to 98'
 *
 * Return: Always 0 (Success)
 *
 * @n: the number
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
			printf("%d, ", n);
			n--;
			}
		}
	}
	printf("\n");

}
