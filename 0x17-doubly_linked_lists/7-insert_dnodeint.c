#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new node
 *  at a given position.
 *  @h: Pointer to head node
 *  @idx: Poition of attachment of new node
 *  @n: New node data
 *
 *  Return: Pointer to new node else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;

		*h = new_node;
		return (new_node);
	}

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp)
	{
		new_node->prev = temp;
		new_node->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
