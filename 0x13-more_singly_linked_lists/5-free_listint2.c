#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head to NULL
 * @head: Pointer to first node in list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
