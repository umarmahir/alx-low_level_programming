/**
 * _strlen - Entry point
 *
 * Description: 'The function calculates the length of a string'
 *
 * @s: The string whose length is to be calculated
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i;
	char str[];

	str = *s;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
