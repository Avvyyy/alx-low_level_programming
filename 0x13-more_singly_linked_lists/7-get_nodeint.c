#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list
 * @head : Pointer to first node in list
 * @index: Index of the node starting at 0
 *
 *Return: nth node else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (index == count)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
