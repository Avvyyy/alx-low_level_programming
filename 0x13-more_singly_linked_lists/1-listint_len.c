#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a linked
 *  listint_t list
 *@h: Pointer to node
 *
 * Return: Number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
