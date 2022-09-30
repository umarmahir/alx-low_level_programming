#include "main.h"

/**
* main - Entry point
*
* Description: 'the program's description'
* @argc: argument counter
* @argv: the argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char* argv[])
{
	int i;

	i = 0;
	while (*(argv[0]) != '\0')
	{
		_putchar(*(argv[0] + i));
		i++;
	}
	_putchar("\n");
	return (0);
}
