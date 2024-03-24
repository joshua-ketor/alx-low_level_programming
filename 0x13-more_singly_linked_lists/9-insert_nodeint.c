#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to pointer to head node
 * @idx: index of the list where the new node should be added./
 * Index starts at 0
 * @n: node value
 *
 * Return: the address of the new node, or NULL if it failed
 * if it not possible to add the new node at index idx, do not add
 * the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int i;

	if (idx == 0)
		return (add_nodeint_end(head, n));

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);
	if (temp->next == NULL)
		return (add_nodeint_end(head, n));

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = temp->next;
	temp->next = node;

	return (node);
}
