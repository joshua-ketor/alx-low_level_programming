#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a `dlistint_t` linked list
 * @head: head to the doubly linked list
 * @index: index of the node, starting from zero
 *
 * Return: nth node, else return NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_index;
	dlistint_t *temp;

	temp = head;
	for (node_index = 0; node_index < index; node_index++)
	{
		temp = temp->next;
	}

	if (!temp)
		return (NULL);

	return (temp);
}
