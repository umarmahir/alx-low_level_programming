#include "main.h"
/**
 * reverse_array - Entry point
 *
 * Description: 'program that reverses array of integers'
 * @a: array to manipulate
 * @i: size of array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int i)
{
	int j;
	int aux;

	j = 0;
	while (j < i)
	{
		aux = a[i - 1];
		a[i - 1] = a[j];
		a[j] = aux;
		i--;
		j++;
	}
}
