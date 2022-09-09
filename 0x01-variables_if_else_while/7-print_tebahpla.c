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

	c = 'z';
	for (i = c; i >= 'a'; i--)
	{

		putchar(i);
	}
	putchar('\n');
	return (0);
}
