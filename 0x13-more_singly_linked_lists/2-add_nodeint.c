#include "lists.h"

/**
 *add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: Pointer to the head of the linked list
 * @n: Integer to be printed in new node
 *
 * Return: Address to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head || !n)
		return (NULL);

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;

	if (!newnode->n)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
