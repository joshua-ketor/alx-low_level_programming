#include "lists.h"

/**
 * get_nodeint_at_index - get the nth mode of a `listint_t` linked list
 * @head: pointer to head node
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node, otherwise NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
