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

	for (i = 65; i <= 90; i++)
	{

		putchar(i);
		c++;
	}
	putchar('\n');

	return (0);
}
