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
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		for (j = 1; j <= 9; j++)
		{
		putchar(',');
		}
		for (k = 1; k <= 9; k++)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
