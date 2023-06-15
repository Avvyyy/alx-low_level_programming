#include "lists.h"

/**
 * print_dlistint - Function to print all the elements of a dlistint
 * @h: Pointer to head node
 *
 * Return: Number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	const dlistint_t* temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}

	return (i);
}
