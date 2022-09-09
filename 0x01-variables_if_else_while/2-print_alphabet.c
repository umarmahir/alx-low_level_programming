#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: 'A program that prints the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char c;
int i;

c = 'a';
for (i = c; i <= 'z'; i++){
putchar(c);
c++;
}
putchar('\n');
return (0);
}
