#include "lists.h"

/**
 * get_dnodeint_at_index - Functionto get a node at a given index
 * @head: Pointer to head node
 * @index: Index of element to retrieve
 *
 * Return: Nth node of linked list else NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *data = NULL;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp && i == index)
		data = (temp);

	return (data);

}
