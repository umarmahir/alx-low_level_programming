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
	char e;
	char q;
	char i;

	e = 'e';
	q = 'q';
	for (i = 'a'; i <= 'z'; i++)
	{

		if (i != e && i != q)
		{

			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
