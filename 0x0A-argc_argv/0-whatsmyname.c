#include "main.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char** argv)
{
	int i;

        i = 0;
	while (*(argv) != '\0')
	{
		_putchar(*(argv + i));
		i++;
	}
	_putchar("\n");
	return (0);
}
