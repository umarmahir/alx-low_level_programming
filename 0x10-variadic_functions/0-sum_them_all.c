#include "variadic_functions.h"
#include  <stdarg.h>

/**
 * sum_them_all - Entry point
 *
 * Description: 'A program that sums a number of integers'
 * @n: The number of integers
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum;
	int i;
	va_list ap;

	va_start(ap, n)
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	return (sum);
}
