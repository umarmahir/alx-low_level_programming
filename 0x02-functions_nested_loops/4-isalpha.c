#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: 'A program that prints alphabets 10 times'
 *
 * Return: Always 0 (Success)
 *
 * @c: The character to check
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) && (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
