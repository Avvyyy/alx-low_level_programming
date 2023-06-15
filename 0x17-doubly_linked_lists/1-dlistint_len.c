#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *  in a linked dlistint_t list
 *  @h: Pointer to head node
 *
 *  Return: Length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	const dlistint_t *temp = h;

	while (temp)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
