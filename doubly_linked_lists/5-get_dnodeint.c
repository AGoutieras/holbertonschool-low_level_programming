#include "lists.h"

/**
 * get_dnodeint_at_index - Frees a list.
 * @head: First node of the list.
 * @index: index of the node.
 *
 * Return: NULL if there is no node, located node otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;
	dlistint_t *current;

	for (current = head, pos = 0; pos < index; current = current->next, pos++)
	{
		if (current == NULL)
			return (NULL);
	}

	return (current);
}
