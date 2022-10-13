#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: 'A program that prints numbers'
 * @n: The number of integers
 * @separator: The separator to print in between numbers
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
