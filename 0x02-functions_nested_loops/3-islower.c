#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: 'A program that prints alphabets 10 times'
 *
 * Return: Always 0 (Success)
 *
 * @c: The character to check
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
