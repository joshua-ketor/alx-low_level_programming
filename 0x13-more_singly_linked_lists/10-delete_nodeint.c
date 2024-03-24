#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index `index` of a \
 * `listint_t` linked list
 * @head: pointer to pointer to head
 * @index: index of the node that should be deleted. Indes starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n, *temp = *head;
	unsigned int i, len = 0;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	n = temp->next;
	if (n->next != NULL)
		temp->next = n->next;
	else
		temp->next = NULL;
	free(n);
	return (1);
}
