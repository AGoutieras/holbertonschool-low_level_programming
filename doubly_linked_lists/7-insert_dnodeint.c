#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list
 * @idx: index to get where the node is added
 * @n: node to add
 *
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current, *new_node

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}


	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

		new_node->n = n;
		new_node->prev = current;
		new_node->next = current->next;

		current->next->prev = new_node;
		current->next = new_node;

		return (new_node);
}
