#include "lists.h"

/**
 * print_list: Functionto print all elements in a list list_t
 * @h: Pointer to list to be printed
 *
 * Return: Numbe of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t j;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d} %s\n", h->len, h->str);

		j++;
		h = h->next;
	}

	return (j);
}


