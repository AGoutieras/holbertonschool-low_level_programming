#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Current element of the list
 *
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
	elements++;
	h = h->next;
	}

	return (elements);
}
