#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *ptr, *tmp,*ad;
    
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
