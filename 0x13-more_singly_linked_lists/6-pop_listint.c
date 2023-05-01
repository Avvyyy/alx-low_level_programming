#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: Pointer to first node in list
 *
 * Return: (0) if head == NULL else head->n
 */

int pop_listint(listint_t **head)
{
	int temp_n; /**Declaring variable
			 *to hold the head node data
			 **/
	listint_t *temp_node;

	if (!head || !*head)
		return (0);

	temp_node = *head;

	*head = temp_node->next;
	temp_n = temp_node->n;

	free(temp_node);
	return (temp_n);

}
