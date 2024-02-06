#include "lists.h"

/**
 * list_len - return the number of elements in linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements (nodes)
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
