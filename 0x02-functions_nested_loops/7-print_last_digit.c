#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: 'A program that prints last digit of a number'
 *
 * Return: Always 0 (Success)
 *
 * @n: The number to check
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last = last * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
