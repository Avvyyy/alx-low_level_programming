#include "lists.h"

/**
 * free_list  - Function that frees a list list_t
 * @head: Pointer to list_t
 */

void free_list(list_t *head)
{
	list_t *freeMe;

	while (freeMe)
	{
		freeMe = head;
		head = head->next;
		free(freeMe->str);
		free(freeMe);
	}
}
