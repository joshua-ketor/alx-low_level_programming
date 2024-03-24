#include "lists.h"

/**
 * listint_len - get the number of elements in a linked `listint_t` list
 * @h: pointer to head node
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (n);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
