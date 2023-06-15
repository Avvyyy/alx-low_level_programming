#include "lists.h"

/**
 * add_dnodeint - Function to add node at the beginning of a list
 * @head: Pointer to head node
 * @n: new node data
 *
 * Return: Pointer to new nod else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
