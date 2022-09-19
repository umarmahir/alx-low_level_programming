/**
 * swap_int - Entry point
 *
 * Description: 'Resets the value a pointer point at to 98'
 *
 * @a: First integer pointer
 * @b: Second integer pointer
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
