#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: 'A program that returns the factorial of a number'
 * @n: The number to calculate factorial of
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
