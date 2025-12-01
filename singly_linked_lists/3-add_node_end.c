#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: First node of the list.
 * @str: String to be added.
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int len;
	char *copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; copy[len] != '\0'; len++)
		;

	new_node->len = len;

	new_node->str = copy;
	new_node->next = NULL;
	
    if (*head == NULL)
        *head = new_node;
    else
    {
        last = *head;

        while (last->next != NULL)
            last = last->next;
        
        last->next = new_node;
    }

	return (new_node);
}
