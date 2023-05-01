#include "lists.h"

/**
 *free_listint - function that frees a listint_t list
 *@head: Pointer to first node in list
 *
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free(head->next);
		free(head);
	}
}
