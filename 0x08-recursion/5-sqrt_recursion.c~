#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: 'A program that calculates x to the power of y'
 * @x: The number to calculate power for
 * @y: number of times x is raised
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
