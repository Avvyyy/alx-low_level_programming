#include "lists.h"

/**
 * add_dnodeint_end - Functiom to add a node at the end of a linked list
 * @head: Pointer to head node
 * @n: Dat to be addded to the list
 *
 * Return: NULL else pointer to new data
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *temp_node = *head;

		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}

		temp_node->next = new_node;
	}

	return (new_node);
}
