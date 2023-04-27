#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: Pointer to list_t
 * @str:  String to be printed in new node
 *
 *Return: Address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		exit(1); /** malloc failed, exit program**/
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node); /** strdup failed, free memory and exit program**/
		exit(1);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}
