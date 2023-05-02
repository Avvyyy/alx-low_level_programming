#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: Pointer to head node
 *
 * Return: Sum of data or
 * (0) if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *new_node;

	if (!head)
		return (0);

	sum = head->n;

	new_node  = head->next;

	while (new_node)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}

	return (sum);
}
