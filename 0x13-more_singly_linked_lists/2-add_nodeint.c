#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a `listint_t` list
 * @head: pointer to pointer to head
 * @n: node value;
 *
 * Return: the address of the new element, or `NULL` if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return  (node);
	}

	node->next = *head;
	*head = node;

	return (node);
}
