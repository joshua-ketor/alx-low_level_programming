#include "lists.h"

/**
 * dlistint_len - get the number of elements in a linked `dlistint_t` list.
 * @h: doubly linked list
 *
 * Return: number of elements in `h`
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
