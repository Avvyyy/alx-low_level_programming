#include "lists.h"

/**
 *  sum_dlistint - Function to return sum of all data in a linked list
 *  @head: Pointer to head node
 *
 *  Return: Sum else 0(if list is empty)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
