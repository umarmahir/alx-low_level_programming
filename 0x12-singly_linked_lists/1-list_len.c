#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Entry point
 *
 * Description: A program that lists all the elements of a linked list
 * @h: pointer the the list_t structure
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{

	size_t i;

	i = 0;
	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);
}
