#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	int sum;

	i = 0;
	sum = 0;
	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b) - 1;
	while (*(b + i) != '\0')
	{
		if ((*(b + i) != '0') && (*(b + i) != '1'))
		{
			return (0);
		}
		sum += (*(b + i) - '0') * (pow(2, len));
		len--;
		i++;
	}
	return (sum);
}
