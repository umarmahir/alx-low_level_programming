#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'A program that prints both upper and lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c;
	char C;
	int i;

	c = 'a';
	C = 'A';
	for (i = c; i <= 'z'; i++)
	{

		putchar(c);
		c++;
	}

	for (i = C; i <= 'Z'; i++)
	{

		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
