#include "lists.h"

/**
 * print_list - Function to print all elements in a list list_t
 * @h: Pointer to list to be printed
 *
 * Return: Numbe of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int j = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d} %s\n", h->len, h->str);
		
		h = h->next;
		j++;

	}

	return (j);
}


