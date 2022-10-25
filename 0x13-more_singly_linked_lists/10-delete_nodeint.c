#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 *
 * Description: 'A program that deletes a node at a particular index'
 * @head: A pointer to the head node's address
 * @index: the index at which to delete node
 * Return: either 1 (success) or -1 (failed).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *ptr, *tmp, *ad;

	i = 0;
	ptr = *head;
	while (ptr)
	{
		if (index == 0)
		{
			*head = ptr->next;
			free(ptr);
			return (1);
		}
		if (i == (index - 1))
		{
			break;
		}
		else
		{
			ptr = ptr->next;
			i++;
		}
	}
	if ((index >= i + 1) || (index < 0) || (*head == NULL))
		return (-1);
	tmp = ptr->next;
	ad = tmp->next;
	ptr->next = ad;
	free(tmp);
	return (1);
}
