#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Entry point
 *
 * Description: 'A program that prints name'
 * @name: The name to print
 * @f: pointer to a function
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
