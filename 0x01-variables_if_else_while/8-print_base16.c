#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;

	c = 'a';
	for (i = '0'; i <= '9'; i++)
	{

		putchar(i);
	}
	for (i = c; i <= 'f'; i++)
	{

		putchar(i);
	}

	putchar('\n');
	return (0);
}
