#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: Pointer to list_t
 * @str: String to be printed in new node
 *
 * Return: Address of new element else NULL on fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (1); /** malloc failed, exit program**/
	}

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node); /** strdup failed, free memory and exit program**/
		return (1);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
