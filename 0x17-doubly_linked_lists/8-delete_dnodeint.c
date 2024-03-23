#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index `index`
 * of a `dlistint_t` linked list
 * @head: pointer to head of doubly linked list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node, *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (-1);

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
	}

	node = temp->next->next;
	if (node != NULL)
		node->prev = temp;
	free(temp->next);
	temp->next = node;

	return (1);

}
