#include "lists.h"

/**
 * free_dlistint - Function to free a doubly linked list
 * @head: Pointer to head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
