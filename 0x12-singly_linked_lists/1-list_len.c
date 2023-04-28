#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: Pointer to list_t
 *
 * Return: The number of nodes in list
 */

size_t list_len(const list_t *h)
{
	size_t nodesNum = 0;

	while (h != NULL)
	{
		h = h->next;
		nodesNum++;
	}

	return (nodesNum);
}
