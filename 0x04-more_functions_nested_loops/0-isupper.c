/**
 * _isupper - Entry point
 *
 * Description: 'the program's description'
 *
 * @c: The number to check
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
