#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: Double pointer to head node in list
 * @idx: Index at which new node will be placed
 * @n: Data in new node
 *
 * Return: Pounter to new node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count = 0;

	if (!*head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	 new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
