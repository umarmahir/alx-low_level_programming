/**
 * _puts - Entry point
 *
 * Description: 'The function that prints strings to the stdout'
 *
 * @str: The string to br displayed
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
